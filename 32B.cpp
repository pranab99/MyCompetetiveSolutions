#include<bits/stdc++.h>
#include<string>
#define mod 1000000007
using namespace std;
void solve()
{ int R=0,T=1,S=2;
  string str;
  cin>>str;
  int len;
  len=str.length();
  for (int i = 0; i < len; i++)
  {
    
  if (str[i]=='.') {
    cout<<R;
  }
  else if(str[i]=='-'&&str[i+1]=='.')
    {cout<<T;i++;}
  else if(str[i]=='-'&&str[i+1]=='-')
    {cout<<S;i++;}
 
  }
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