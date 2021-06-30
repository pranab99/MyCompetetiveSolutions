#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;


void solve() 
{ 
  int n;
 float a,s=0,m=0;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    cin>>a;
    s+=a;
  }
 
 m=s/n;
 
 cout<<m;


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