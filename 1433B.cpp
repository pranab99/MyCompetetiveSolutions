#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve()
{  
  long long n,gap=0,left=0,right=0;
  cin>>n;
  long long A[n];
  for(int i=0;i<n;i++)
    {cin>>A[i];
    
      if(A[i]==1)right=i;}


      for (int i = 0; i < n; ++i)
      {
        if(A[i]==1)
          {left=i;break;}
      }
if(left==right)cout<<0;

    else{
        for (int i = left; i <=right ; ++i)
        {
          if(A[i]==0)gap++;
        }
        cout<<gap;
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