#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;


void solve() 
{ 
     int n,k,s=0,ct=0;
     cin>>n>>k;
     int A[n];
     for (int i = 0; i < n; ++i)
     {
        cin>>A[i];
        s+=A[i];
      }
for (int i = 0; i < n; ++i)
{
   if(A[i]>k)
   {ct=-1;
      break;}
}
 if(ct!=-1)
 {  if(s<k||k==1)
   ct=1;
   else
   ct=(s/(k-1))+1;
  
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