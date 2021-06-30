#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve()
{ 
int n,max;
cin>>n;
std::vector<int> A;
std::vector<int> c;
for (int i = 0; i < n; i++)
{
   A[i]=i+1;
}
for (int i = 0; i < n; i++)
{
  c[i]=gcd(A[i],A[i+1]);
  
}
max=c[0];
for (int i = 0; i < n; ++i)
{
  if(c[i+1]>c[i])
    max=c[i+1];
}
   cout<<max; }

  
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