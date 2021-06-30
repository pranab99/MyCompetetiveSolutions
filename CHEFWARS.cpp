#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{
  int dh,cp;
  cin>>dh>>cp;
for(;cp>0;cp/=2)
  {
      dh=dh-cp;
    
  }

 if(dh>0)
  cout<<0;
else
  cout<<1;


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