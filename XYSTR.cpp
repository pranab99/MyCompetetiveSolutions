#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{
  string m;
  cin>>m;
  int l,b=0,g=0,r=0;
  l=m.length();
  for (int i = 0; i < l; i++)
  {
    if (m[i]=='x')
    {
      b++;
    }
    else
      g++;
  }
 if((b!=0)&&(g!=0))
  {
    if(b>=g)
      cout<<g;
    else
      cout<<b;
  }
else
  cout<<0;
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