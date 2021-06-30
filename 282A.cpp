#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}

void solve()
{  int n,x=0;
  cin>>n;
  while(n--)
  {
    string s;
    cin>>s;
    if(s=="X++")
      x+=1;
    else if(s=="++X")
      x+=1;
    else if(s=="--X")
      x-=1;
    else if(s=="X--")
      x-=1;
    else
      x=0;

  }
  cout<<x;
   

   }

signed main()
{
   while(t--)
   {solve();cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}