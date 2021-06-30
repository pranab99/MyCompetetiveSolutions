#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}
//Overall the friends have 4 * 5 = 20 milliliters of the drink, it is enough to make 20 / 3 = 6 toasts.
// The limes are enough for 10 * 8 = 80 toasts and the salt is enough for 100 / 1 = 100 toasts. 
//However, there are 3 friends in the group, so the answer is min(6, 80, 100) / 3 = 2.


void solve()
{
   int n, k, l, c, d, p, nl, np,first=0,second=0,third=0;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 first=(k*l)/nl;
 second=c*d;
 third=p/np;


   cout<<min({first,second,third})/n;

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