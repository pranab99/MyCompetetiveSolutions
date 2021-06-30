#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  {
  int ct1=0,ct2=0,ct3=0,m=0;
  string s,ns;
  cin>>s;

  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='1')
      ct1++;
    if(s[i]=='2')
      ct2++;
    if(s[i]=='3')
      ct3++;
  }
  
  while(ct1--)
  {
      ns+="+1";

  }

while(ct2--)
  {
      ns+="+2";

  }
while(ct3--)
  {
      ns+="+3";

  }


ns.erase(ns.begin());
cout<<ns;

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