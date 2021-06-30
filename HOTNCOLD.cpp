#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ 

      int m,tc,th;
      cin>>m>>tc>>th;
      if((th-tc)%3)
      {
          cout<<"Yes\n";
      }
      else
      {
          if((th-tc)/3>m)
          cout<<"Yes\n";
          else
          cout<<"No\n";
      }
  
 
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