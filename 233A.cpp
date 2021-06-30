#include<bits/stdc++.h>
#include<string.h>
#define mod 1000000007
using namespace std;


void solve()
{int n;
  cin>>n;
  int A[n];
  for (int i = 1; i <=n; ++i)
  {
   A[i]=i;
  }
for (int i = 1; i <=n; ++i)
{
 if(A[i]==i)
 {
  swap(A[i],A[i+1]);
 }
}
if(n%2!=0)
cout<<-1;
else
{for (int i = 1; i <=n ; ++i)
  {
  cout<<A[i]<<" ";
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
