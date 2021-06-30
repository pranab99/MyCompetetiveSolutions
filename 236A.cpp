#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{int ct=0;
  string s;
  cin>>s;
  
  sort(s.begin(),s.end());
  
  s.erase(unique(s.begin(),s.end()),s.end());


 
if(s.length()%2==0)
  cout<<"CHAT WITH HER!";
else
  cout<<"IGNORE HIM!";
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