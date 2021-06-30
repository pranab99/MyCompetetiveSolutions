#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ 
int a,b,L,R,c=0,ac=0,bc=0,m=0,ct=0;
cin>>a>>b>>L>>R;
int A[500];

for (int i = 0; i <500; i++)
{if(i%2!=0)
  {
    c=c+(a+b);
  A[i]=c;}
  else
    {ac+=a*abs(i-1);
    m=ac+bc;
    bc+=b;
    A[i]=m;}
  }
for(int i=0;i<500;i++)
{
  if(A[i]>=L && A[i]<=R)
    
    ct++;
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