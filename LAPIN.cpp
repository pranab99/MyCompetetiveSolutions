#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
void solve()
{ ll d,c;
   cin>>d>>c;
   ll a1,a2,a3,b1,b2,b3,sa1=0,sb1=0,sc=0;
   cin>>a1>>a2>>a3;
   cin>>b1>>b2>>b3;
   sa1=a1+a2+a3;
   sb1=b1+b2+b3;
   sc=sa1+sb1+c;
    if(sa1>=150)
      sa1=sa1+d;
    if(sb1>=150)
      sb1=sb1+d;


   
   if(sa1+sb1>sc)
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
   cin>>t;
 
   while(t--)
   {solve();cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}