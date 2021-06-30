#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{int alice=0,bob=0;
  std::vector<int> a(3);
  std::vector<int> b(3);
  for (int i = 0; i < a.size(); i++)
  {
    cin>>a[i];
   }
for (int i = 0; i < b.size(); ++i)
{
  cin>>b[i];
  }
for (int i = 0; i < a.size(); ++i)
{
  if(a[i]>b[i])
  alice++;
else if(a[i]<b[i])
  bob++;

}
cout<<alice<<" "<<bob;
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