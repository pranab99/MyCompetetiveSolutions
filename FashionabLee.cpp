#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ 
  long long n,a=4,b=3,flag=0;
  cin>>n;
   if(n%4==0)
    cout<<"YES";
  else
    cout<<"NO";
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