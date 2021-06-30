#include<bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef long long ll;
using namespace std;
void solve()
  {int n,ct=0;
    cin>>n;//size of array//
    int A[n];
  
   for (int i = 0; i < n; ++i)
   {
     cin>>A[i];

   }
    int i, j;  
    for (i = 0; i < n-1; i++)     
    for (j = 0; j < n-i-1; j++)  
       { if (A[j] > A[j+1])  
          {
            int t;
            t=A[j];
            A[j]=A[j+1];
            A[j+1]=t;
            }    
          }
 for (int i = 0; i < n; ++i)
 {
   cout<<A[i]<<" ";
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