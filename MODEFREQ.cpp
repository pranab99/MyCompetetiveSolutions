#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  {
     long long n,min=0,maxfreqn=0,ct=0;
     cin>>n;
     int anie;
     std::vector<int> v,check,freq;

   for(int m = 0; m < n; ++m)
   {
     cin>>anie;
     v.push_back(anie);
   }
  
   min=*min_element(v.begin(),v.end());
  
  for (int i = 0; i < n; ++i)
  {      
   check[i]=v[i];
   freq.push_back(0);
   for (int j = i+1; j <v.size() ; ++j)
      {
      if(check[i]==v[j])
      freq[i]+=2;
       }
  }
   

     maxfreqn=*max_element(freq.begin(),freq.end());
     ct=std::count(freq.begin(),freq.end(),maxfreqn);

   if(ct>1)
   cout<<min;
   else
   cout<<maxfreqn;


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