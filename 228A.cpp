#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  {
  long long a,b,c,d,ct=0;
  cin>>a>>b>>c>>d;
   if(a==b||a==c||a==d)ct++;
   if(b==c||b==d)ct++;
   if(c==d)ct++;
   cout<<ct;
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