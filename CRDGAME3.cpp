#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
using namespace std;
void solve()
{int c,r;
  cin>>c>>r;
        int cq,cr,rq,rr;
        cq=c/9;
        cr=c%9;
        rq=r/9;
        rr=r%9;
        if(cr){
            cq+=1;
        }
        if(rr){
            rq+=1;
        }
        if(cq<rq){
            cout<<0<<" "<<cq;
        }else{
            cout<<1<<" "<<rq;}}
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