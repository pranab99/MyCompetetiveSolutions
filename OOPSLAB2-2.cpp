#include<bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef long long ll;
using namespace std;

void swap3(int *p,int *q)
{
 int tmp=*p;
 *p=*q;
 *q=tmp;
 cout<<"Call by address "<<*q<<" "<<*p<<endl;

}
void swap2(int &d,int &e)
{
 int tm=d;
 d=e;
 e=tm;
 cout<<"Call by reference "<<d<<" "<<e<<endl;
}
void swap1(int c,int d)
{
  int t=c;
  c=d;
  d=t;
  cout<<" call by value "<<c<<" "<<d<<endl;
}

void solve()
{ int a,b;
  cin>>a>>b;
  swap1(a,b);
  swap2(a,b);
  swap3(&a,&b);

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