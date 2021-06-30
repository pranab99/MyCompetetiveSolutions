#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{int n,m;
cin>>n;
m=n;
while(m!=1)
{
  if(m%6==0)
    m/=6;
    
  else 
    m*=2;
    
   ct++;
   
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