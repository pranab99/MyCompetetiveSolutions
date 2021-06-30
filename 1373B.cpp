#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ string s;
  cin>>s;
  int l,count0=0,count1=0,c=0;
  l=s.length();
  for (int i = 0; i < l; ++i)
  {
   
  if (s[i] == '0') 
            count0++; 
        else
            count1++; 
     }

  c=min(count0,count1);
  if(c%2==0)
  cout<<"NET";
  else
    cout<<"DA";
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