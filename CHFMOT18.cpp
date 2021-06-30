#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{int s,n,c=0,d=0,r=0;
cin>>s>>n;
 
 if(s<n&&s%n!=0)
  d=2;
else if(s<n&&s%n==0)
  d=1;
else
 {d=floor(s/n);
 if(s%n!=0)
 {r=s%n;
 
 if((r%2==0&&r<=n)||r==1)
  r=1;
else
  r=2;}}

c=d+r;

if(s==1||s==n)
  c=1;

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