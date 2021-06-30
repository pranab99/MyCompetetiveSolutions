#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  {long n,m,x,y;
   long k;
   
    cin>>n>>m>>x>>y;
   if(n*m>1) x=min(x,y);
  y=min(y,2*x);
  cout<<(n*m+1)/2*x+(n*m)/2*(y-x);

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