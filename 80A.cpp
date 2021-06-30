#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int n,m;
  cin>>n>>m;
  int flag=0;
  int counter=0;
     for(int p=n+1;p<=m;p++){
         counter=0;
         for(int i=2;i<=(p/2)+1;i++){
             if(p%i==0){
                 counter++;
             }
       }
       if(counter==0){
           if(p==m){
           cout<<"YES"<<endl;
           flag=1;
           break;
           }
          else{
          cout<<"NO"<<endl;
           flag=1;
           break;
           }
       }
  }
  if(!flag){
      cout<<"NO"<<endl;
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