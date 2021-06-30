#include<bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef long long ll;
using namespace std;


int add3(int d,int e)
{
  return d+e;
}

int add2()
{int f,g;
  cin>>f>>g;
 return f+g;
}


void add1(int c,int d)
{
  cout<<c+d<<"  with argument and no return value"<<endl;
 cout<<add2()<<"  with return value and no argument"<<endl;
 cout<<add3(c,d)<<" return type with argument";
}
void solve()
{ int a,b;
   cin>>a>>b;
int s=a+b;
cout<<s<<endl;//no argument with no return value
add1(a,b);//with argument and no return value

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