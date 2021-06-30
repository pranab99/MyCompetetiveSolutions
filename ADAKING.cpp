#include<bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef long long ll;
using namespace std;
void solve()
  {int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; ++i)
    { 
      cin>>A[i];

    }
   int s=A[0];

for (int i = 0; i < n; ++i)
{
  if(A[i]<s)
    s=A[i];
}
cout<<s<<"\n";
int l;
l=A[0];
for (int i = 0; i < n; ++i)
{
if(l<A[i])
l=A[i];

}
cout<<l;
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