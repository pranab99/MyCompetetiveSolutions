#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int ct=0;
string a,b;
cin>>a>>b;
for (int i = 0; i <a.length(); i++)
{ct=0;
  for (int j=0;j<b.length(); j++)
  {
    if(a[i]==b[j])
      ct++;

  }
  if(ct==0)
  {cout<<a[i];
  }
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