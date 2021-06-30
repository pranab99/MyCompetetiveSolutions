#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int n,pa=0,pb=0,sa=0,sb=0,d1,d2;
  cin>>n;
  int A[n] ,B[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>A[i]>>B[i];
  }
   
 for (int i = 0; i < n; ++i)
 {  sa=0;sb=0;
  while(A[i]!=0&&B[i]!=0)
   {
    d1=A[i]%10;
   d2=B[i]%10;
   sa+=d1;
   sb+=d2;
   A[i]/=10;
   B[i]/=10;
   if(sa>sb)
    pa++;
  else if(sa==sb)
    {pa++;
    pb++;}
    else
      pb++;

 }
}
if(pa>pb)
  cout<<0<<" "<<pa;
else if(pa==pb)
  cout<<2<<" "<<pa;
else
  cout<<1<<" "<<pb;

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