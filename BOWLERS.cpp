#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
using namespace std;
void solve()
{ 
  ll n,c=0;
  cin>>n;
  ll A[n],s[n];
  
 for (int i = 1; i <=n ; ++i)
 {cin>>A[i];
   for (int j= 1; j <=n; ++j)
   {
     s[i]=A[i]-j;
     if(s[i]==0)
      {s[i]=0;
      break;}

   }
   c+=s[i];
 }
    if(c==0)
      cout<<"YES";
    else
      cout<<"NO";

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