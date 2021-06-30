#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve()
{  
  long long n,k,ct=0;
  cin>>n>>k;
  long long A[n];
  for (int i = 0; i < n; ++i)
  {
     cin>>A[i];
  }
   

  for(int i=0;i<n;i++)
   {
      for (int j=0;j<n; j++)
      {  

        if(i==j)break;
      if(A[j]+A[i]<=k)ct++;
        
        }
   }

   cout<<ct;
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