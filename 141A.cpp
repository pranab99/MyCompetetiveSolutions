#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve()
{  
   string sa,sb,sc,st;
   cin>>sa>>sb>>sc;
   st=sa+sb;
   sort(st.begin(), st.end());
   sort(sc.begin(),sc.end());
   if (sc==st)
   {
     cout<<"YES";
   }else

   cout<<"NO";

  
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