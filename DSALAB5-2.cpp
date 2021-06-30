#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
struct Date
{
int  day;
int month;
int year;
};

void solve() 
{ 
   Date d1,d2;
   cout<<"Enter 2 dates";
   cin>>d1.day>>d1.month>>d1.year;
   cin>>d2.day>>d.month>>d2.year;

   if(d1.day==d2.day&&d1.month==d2.month&&d1.year==d2.year)
    cout<<" Both dates are equal";

  if(d1.year>d2.year)
  {
    cout<<d1.day<<" "<<d1.month<<" "<<d1.year;
  }
  else if(d1.year=d2.year&&d1.month>d2.month)
    cout<<d1.day<<" "<<d1.month<<" "<<d1.year;

  else
     cout<<d2.day<<" "<<d2.month<<" "<<d2.year;
   cout<<" is greater";

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