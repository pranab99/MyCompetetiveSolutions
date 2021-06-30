#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  { 
     long long int n,ct1=0;
     cin>>n;
     int A[n];
     for(int i=1; i<=n;i++)
    {  cin>>A[i];
      if(A[i]==1)ct1++;
     
    }
     
     if((ct1==0)||(ct1%2!=0))
     {
        
         cout<<n/2<<"\n";
      for (int i = n/2+1; i <=n ; ++i)
      {
        cout<<A[i];
      }
  
     }
     else
     {
      cout<<n<<"\n";
      for(int i = 1; i <=n ; ++i)
      {
        cout<<A[i];
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
    cin>>t;
 
   while(t--)
   {solve();cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}