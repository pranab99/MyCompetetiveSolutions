#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ long long a,b,c;
  cin>>a>>b>>c;
  float d=c/b;
  if(a<d)
    {
    cout<<a*d<" ";
    cout<<-1;
    }
   else if(d<a)
   {
    cout<<-1<<" ";
    cout<<b*d;
   }
   else
   {
    cout<<1<<" ";
    cout<<2;
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