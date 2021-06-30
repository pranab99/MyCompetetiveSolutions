#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int a,b,n,c=0;
  cin>>a>>b>>n;

  for (int i = 0; i < n;i++)
  {
    if(a>b)
    b+=a;
    else
    a+=b;
    c++;
    if(a>n||b>n)
      break;
  }
    cout<<c;
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