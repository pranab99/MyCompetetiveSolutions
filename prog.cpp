#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int c=0,i,j;
  int matrix[6][6];
  
  for (i=0;i<5;i++)
  for (j=0;j<5;j++)
  cin>>matrix[i][j];
 
for (i=0;i<5;i++)
  {for (j=0;j<5;j++)
    if (matrix[i][j]==1)
    {
   c=abs(i-2)+abs(j-2);
     break;
    }}
 
cout<<c;
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