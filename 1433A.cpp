#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void solve()
{  
  long long x,cd=0,nd=0;
  cin>>x;
   
     nd=((x%10)-1)*10; 
  while(x!=0)
    {  
      x/=10;
      cd++;   

     }
     if(cd==1)
      nd+=1;
     if(cd==2)
     nd+=3;
     if(cd==3)nd+=6;
     if(cd==4)nd+=10;
cout<<nd;
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