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
{ ll suma=0,sumb=0;
  string sa,sb;
  cin>>sa>>sb;
  transform(sb.begin(), sb.end(),sb.begin(),::tolower);
  transform(sa.begin(),sa.end(),sa.begin(),::tolower);
   
   suma=sa.compare(sb);
   if(suma>0)
    cout<<'1';
    else if(suma ==0)
      cout<<'0';
    else
      cout<<"-1";
  
   }

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   #ifdef Pranab
   freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
   #endif  
 
   int t=1; 
  // cin>>t;
 
   while(t--)
   {solve();cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}