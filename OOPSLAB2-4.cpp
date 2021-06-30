#include<bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef long long ll;
using namespace std;
void sphere(long n)
{
  cout<<"Sphere Volume"<<4/3*3.14*(n*n*n);
}

void circle(long r)
{
cout<<"Circle area "<< 3.14*r*r<<endl;
}

void solve()
{ 
 long r1,r2;
 cin>>r1>>r2;
 circle(r1);
 sphere(r2);
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