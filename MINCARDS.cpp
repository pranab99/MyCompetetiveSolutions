#i#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{
    int n,g=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
      if (s[i]==s[i+1])
      {
        g++;
      }
    }
    cout<<g;
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