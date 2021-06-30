#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int l=0,u=0;
  string m;
  cin>>m;
  for (int i = 0; i < m.length(); i++)
  {int c=m[i];
   if(islower(c))
    l++;
  else 
    u++;

  }
  if(l>=u)
  {
    for (int i = 0; i <  m.length(); i++)
    {
      int kl=m[i];
      m[i]=tolower(kl);
      cout<<m[i];
        }
  }
  else
  {
    for (int i = 0; i <  m.length(); i++)
    {
    int lk=m[i];
      m[i]=toupper(lk);
      cout<<m[i];
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
   //cin>>t;
 
   while(t--)
   {solve();cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}