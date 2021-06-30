#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{
  
int a,m,n,d=0,d2=0,rev=0,rev2=0;
cin>>n>>a;
m=n;

  for (int i = 0; i < a; i++)
  {
    d=m%10;
    if(d==0)
      {m/=10;
    continue;}
    else
     m=m-1;
 }
 cout<<m;

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