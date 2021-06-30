#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;
void solve()
  {
    ll n,a,ct=0,min,max,m=0;
    cin>>n;
    ll A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    
    if(n==1)
      cout<<0;
    else
     {       min=A[0];
             max=A[0];
             for(int j=0; j<n; j++)
             {
               if(A[j]<min)
              {min=A[j];
                ct++;
              }
              if(A[j]>max)
                {   max=A[j]; 
                   ct++;
                 }

             }

       
 
     cout<<ct;
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