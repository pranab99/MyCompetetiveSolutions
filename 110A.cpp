#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{int d,x=0,y=0;
  long long n;
  cin>>n;
  
  while(n!=0)
  {  x++;
     d=n%10;
     
     if((d==4)||(d==7))      
     { y++;}
  
    n/=10;
    }

if((y==7)||(y==4))
  cout<<"YES";

else
cout<<"NO";
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