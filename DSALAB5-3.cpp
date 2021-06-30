#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;


void solve() 
{ int n;
  cout<<"Enter the degree of polynomial";
  cin>>n;

  int A[n],B[n],C[n];

  cout<<"Enter the coefficients of A and B";
  for (int i = 0; i < n+1; ++i)
  {
    cin>>A[i];
    
  }
  for (int i = 0; i < n+1; ++i)
  {
    cin>>B[i];

  }
  for (int i = 0; i < n+1; ++i)
  {
    C[i]=A[i]+B[i];
  }
cout<<" the polynomials are ";
 for (int i=0; i<n+1; i++) 
  { 
      cout<<C[i];
       if (i != 0) 
        cout << "x^" << i ; 
       
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