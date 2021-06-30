#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int n,t;
  char temp;
  char str[10];
  cin>>n;
  cin>>t;
for (int i = 0;i<n; i++)
{
  cin>>str[i];
}
for (int i = 0; i < t; i++)
{
  for (int j = 0; j < n; j++)
  {
    if ((str[j]=='B')&&(str[j+1]=='G'))
    {
       {temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
        ++j;}


     }
  }
}

for (int m = 0; m < n; m++)
{
 cout<<str[m]; 
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