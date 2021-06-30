#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  {int n,tmp=0,gs,ls,max=0,min=0,a;
    cin>>n;
    std::vector<int> A;

    for (int i = 0; i < n; ++i)
    {
      cin>>a;
      A.push_back(a);
    }

   min=*min_element(A.begin(),A.end());
   max=*max_element(A.begin(),A.end());
 for (int i = 0; i < n; ++i)
  {
  if(A[i]==max)
  {
    gs=i;
    A.erase(A.begin()+gs);
    A.insert(A.begin(),max);
    break;
  }
 }
 
for (int i = n-1; i >=0; i--)
{
 if(A[i]==min)
  {ls=abs(n-i)-1;
  break;}
}
cout<<gs+ls;

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