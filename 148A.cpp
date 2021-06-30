#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  {long long int damaged=0;
 long long k,l,m,n,d;
 cin>>k;
 cin>>l;
 cin>>m;
 cin>>n;
 cin>>d;

if(k==1||l==1||m==1||n==1)
   cout<<d;
else
{
  for (int i = 2; i <=d ; ++i)
  {
     if(i%k==0||i%l==0||i%m==0||i%n==0)
     damaged++;
  }
cout<<damaged;
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