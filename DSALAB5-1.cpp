#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;
struct Customers
{
  string s;
  long acn;
  long bal;
};

void solve() 
{ int n;
  cin>>n;
  Customers c[n];
  cout<<"Write Customer names\n";
  cout<<"Acc nos\n";
  cout<<"Balance in $ serially\n\n";
  for (int i = 0; i < n; ++i)
  {
    cin>>c[i].s;
    cin>>c[i].acn;
    cin>>c[i].bal;

  }
  
  for (int i = 0; i < n; ++i)
   {
      if(c[i].bal<200)
        cout<<c[i].s<<" has Balance less than 200$ \n";
      if(c[i].bal>1000)
      {
        c[i].bal+=100;
        cout<<c[i].s<<" balance has been incremented to "<<c[i].bal<<"$ and his Acc no is "<<c[i].acn<<" \n";

      }
   } 
 
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