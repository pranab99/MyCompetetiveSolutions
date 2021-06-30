#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
using namespace std;
void solve()
{
  ll n,k,ct=0,m=100000000,m2=-1;
  cin>>n>>k;
  int A[n];
  for (int i = 0; i < n; ++i)
  {
  cin>>A[i];
  }
  for (int i =0 ; i <n; ++i)
  if(k%A[i]==0)
    {ct=k/A[i]-1;
  if(ct<m)
   {m=ct;
    m2=A[i];
  }
  }
    cout<<m2;
}
signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   #ifdef Pranab
   freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
   #endif  
 
   int t=1; 
   cin>>t;
 
   while(t--)
   {solve();cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}
