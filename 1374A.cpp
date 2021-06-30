#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{int x,y,n;
  cin>>x>>y>>n;
  for (int i = n; i>=0 ; i--)
  {if(x==0||i<x||x<y||x<2)
    {
      cout<<0;
      break;
    }
    if(i%x==y)
    { cout<<i;
      break;}


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