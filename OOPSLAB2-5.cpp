#include<bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef long long ll;
using namespace std;
struct emp
{
   string n;
   int id;
   string dob;
   long salary;
};

void solve()
{ int n,ct=0;
   cin>>n;
cout<<"\n";
 emp st[n];
 for (int i = 0; i < n; ++i)
 {
   cin>>st[i].n;
   cin>>st[i].id;
   cin>>st[i].dob;
   cin>>st[i].salary;
   cout<<"\n";
 }
int max;
max=st[0].salary;
for (int i = 0; i < n; ++i)
{
    if(max>st[i].salary)
      {max=st[i].salary;
         ct=i;
      }
}

cout<<"Max salary employee details"<<endl;
cout<<st[ct].n;
cout<<st[ct].id;
cout<<st[ct].dob;
cout<<st[ct].salary;
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