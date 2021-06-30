#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  { 
    string s;
    cin>>s;
   if(s.length()>10)
   {
     cout<<s[0]<<s.length()-2<<s[s.length()-1];
    

   }
   else
    cout<<s;


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