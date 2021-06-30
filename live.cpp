#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}

void solve()
{
	ll n,rmin=0,rmax=0,lmin=0,lmax=0;
  cin>> n;
  int a[n];
  for (int i = 1; i <=n; ++i)
  {
    cin>>a[i];

  }

  for (int i = 1; i <=n; ++i)
  {
    if(a[i]==*min_element(a+1,a+n+1))
    {
      lmin=i;
    }
         if(a[i]==*max_element(a+1,a+n+1))
         {
          lmax=i;
         }  
      }

      rmin=n-lmin;
      rmax=n-lmax;
     cout<<lmin<<lmax<<rmax<<rmin;
   
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