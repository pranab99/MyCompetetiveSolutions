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
   int l;
   
   cin>>l;
   
for (int i = 0; i < n; ++i)
{
  if(A[i]==l)
    {ct++;
    cout<<"Present \n";
    }

}

if(ct==0)
  cout<<"Not present \n";


int s1;
cin>>s1;
for (int i = 0; i < n; ++i)
{
  if(s1<A[i])
    cout<<A[i];
}
cout<<" are less than the particular value \n";
for (int i = 0; i < n; ++i)
{
   if(s1>A[i])
    cout<<A[i];

}
cout<<" are more than the particular value";
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