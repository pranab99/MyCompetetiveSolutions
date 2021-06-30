#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve()
{  
   long long n,ct=0,m=0;
   cin>>n;
string s;
cin>>s;
for (int i =0; i <=n/2 ; ++i)
{
   for(int j=n;j>=n/2+1;j--)
   {
      if(s[j]==s[i])
      {
         ct++;  
      }

   }
   if(ct==0){cout<<"NO";m++;break;}
   ct=0;
}
if(m==0)
   cout<<"YES";

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