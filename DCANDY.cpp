#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ 
int n,min=0,c=0;
cin>>n;
int A[n];
for (int i = 1; i <=n; i++)
{
  cin>>A[i];
}
min=A[1];
for (int i = n; i>=1 ; i-=3)
 {if(i-3<0)
  break;
    if((A[i]<=A[i-1])&&(A[i]<=A[i-2]))
  min=A[i];
  else if(A[i-1]<=A[i-2]&&A[i-1]<=A[i])
  min=A[i-1];
  else 
  min=A[i-2];

  c+=min;
}

cout<<c;
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