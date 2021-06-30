#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;
void solve()
  {
    ll n,ctl1=0,ctl0=0,ctr1=0,ctr0=0,r,l;
    cin>>n;
    int li[n],ri[n];
    
    for(int i=0;i<n;i++)
    {
      cin>>li[i];
      if(li[i]==1)ctl1++;
      else ctl0++;
      cin>>ri[i];
      if(ri[i]==1)ctr1++;
      else
       ctr0++;
     
    }
      

    r=min(ctr1,ctr0);
    l=min(ctl1,ctl0);

    cout<<r+l;
    

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