#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int n,g=0;
  cin>>n;
  int A[n];
  for (int i = 0; i < n; i++)
  {
    cin>>A[i];

  }
     

   int oddInd = 1; 
    int evenInd = 0; 
    if((n==1)&&(A[0]%2!=0))
      g=-1;
   else{ while (true) 
    {
        while (evenInd < n && A[evenInd] % 2 == 0) 
            evenInd += 2; 
              
        while (oddInd < n && A[oddInd] % 2 == 1) 
            oddInd += 2; 
              
        if (evenInd < n && oddInd < n) 
           { swap (A[evenInd], A[oddInd]);
                  g++;}
              
        else
            break;
    } }
    cout<<g;
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