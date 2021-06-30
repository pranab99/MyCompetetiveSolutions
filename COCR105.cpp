#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ 
 int l,r,c=0;
 cin>>l>>r;
 if((l==r) || ((l==0)&&(r==24)))
   c=0;
else if(l<r)
 for (int i =l; i <r; i++)
 {   
    c+=2;
 }
 else
   {
      if(r<12)
       for (int i =r ; i <abs(l-24) ; i++)
       {
          c+=2;
       }
      else
      for (int i = 0; i <24-abs(l-r) ; i++)
      {
        c+=2;
      }
       
   }
   cout<<c;  

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