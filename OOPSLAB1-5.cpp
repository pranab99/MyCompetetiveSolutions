#include<bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
typedef long double ld;
typedef long long ll;
using namespace std;
void solve()
  {
    int a,b,gcd;
    cin>>a>>b;
    if(a>b)
    {
      for (int i = 1; i <=a ; ++i)
      {
        if(a%i==0 && b%i==0)
        gcd=i;
      
      }
    }
    else
    {
      for (int i = 1; i <=b; ++i)
      {
         if(a%1==0 && b%i==0)
        gcd=i;
      }
    }
   cout<<gcd; 
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
   {solve();
    cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}