#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int n,ct1=0,ct9=0;
  cin>>n;
  string A[n];
  for (int i = 0; i < n; ++i)
  {
   cin>>A[i];
   if(A[i]=="100000000")
    ct1++;
  else if(A[i]=="900000000")
    ct9++;

  }
  if(ct9>=1)
  {if(ct1==0)
    cout<<0;
    else
      cout<<2;
  }
   
  else if(ct1>=1)
  {
    if(ct9==0)
     cout<<ct1;
    else
      cout<<2;
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