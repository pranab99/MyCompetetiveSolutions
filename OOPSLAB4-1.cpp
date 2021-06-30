#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

class Bank
{

  string n;
  long acc;
  string acctype;
  long bal;

public:

void initvalue(string name,long accno,string acctypenew,long balance){
n=name;
acc=accno;
acctype=acctypenew;
bal=balance;
}
long deposit()
{
  long amt;
  cout<<"Enter amount ";
  cin>>amt;
  
  bal+=amt;
  return bal;

}
long withdraw()
{ 
  long wid;
  cout<<"Withdraw amount";
  cin>>wid;
  bal-=wid;
  return bal;

}
void display(){
cout<<"\n Account number "<<acc;
cout<<"\n Name of acc holder"<<n;
cout<<"\n Account type"<<acctype;
cout<<"\n Balance after withdraw \n"<<withdraw();
}

};


void solve() 
{ string name;
  long accno;
  string acctypenew;
  long balance;

Bank b;
cin>>name>>accno>>acctypenew>>balance;
b.initvalue(name,accno,acctypenew,balance);
b.display();

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