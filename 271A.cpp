#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{
   int n=0,d1,d2,d3,d4,m,p;
cin>>m;
n=m+1;
   for(int i=n;i<10000;i++)
    {p=i;
        d1=p%10;
        p/=10;
        d2=p%10;
        p/=10;
        d3=p%10;
        p/=10;
        d4=p%10;
        if(d1!=d2&&d1!=d3&&d1!=d4&&d2!=d3&&d2!=d4&&d3!=d4)
         {cout<<i;
         break;}}
       }
      
  
signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   #ifdef Pranab
   freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
   #endif  
 
   int t=1; 
  // cin>>t;
 
   while(t--)
   {solve();cout<<"\n";}
 
   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;
 
   return 0;
}