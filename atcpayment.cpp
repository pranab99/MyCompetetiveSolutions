#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int countSetBits(int n) 
{ 
    // base case 
    if (n == 0) 
        return 0; 
    else
        return 1 + countSetBits(n & (n - 1)); 
} 
void solve()
{int n,k,count;

  cin>>n>>k;
  int A[n],binaryNumber[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>A[i];

}


for (int i = 0; i < k; ++i)
{   
    count+= countSetBits(A[i]);

}
cout<<count;  }
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