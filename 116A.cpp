#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
using namespace std;
void solve()
{
  ll n,max=0;
  cin>>n;
  int A[n],B[n];
  std::vector<int> s(n);
  for (int i = 0; i < n; ++i)
  {
     cin>>A[i]>>B[i];
    
      
     }


  for (int i = 0; i < n; ++i)
  {  
    s[i]=A[i]+B[i];
    A[i+1]=s[i]-A[i+1];
   }

  
  cout<<*max_element(s.begin(),s.end());
}
signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   #ifdef Pranab
   freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
   #endif  
 
   int t=1; 
   //cin>>t;
 
   while(t--)
   {solve();cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}