#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int max(int a,int b)
{
   if(a>b)return a;
   else
   return b;
}
void solve()
{  
 int n,res1=0,res2=0;
 cin>>n;
 int  A[n];
for (int i = 0; i < n; ++i)
{
   cin>>A[i];
 
}
 
 if(n==1)cout<<A[0];
else if(n==2){
   cout<<max(A[0],A[1]);
}
else if(n==3)
{
  sort(A,A+n);
  cout<<max(A[0]+A[1],A[2]);
}
else
{
  sort(A,A+n);
   res1=max(A[0]+A[3],A[2]+A[1]);
   res2=max(A[0]+A[1]+A[2],A[3]);
   if(res1<res2)
      cout<<res1;
   else
      cout<<res2;
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