#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
 
void solve()
  { int n;
    cin>>n;
    while(n--)
    {int stu;
      int c1=0,c2=0,c3=0,c4=0;
      cin>>stu;
      string s[stu];
    

string Gryffindor[5]={"Courage", "Bravery","Chivalry","Daring"};
string Slytherin[5]= {"Resourcefulness","Cunning","Ambition","Determination"};
string Ravenclaw[5]={"Intelligence","Wit","Wisdom","Creativity"};
string Hufflepuff[5]={"Diligence","Dedication","Fairness","Patience"};
   for (int i = 0; i < stu; ++i)
    {
      cin>>s[i];
    }
    
    for (int i = 0; i < stu; ++i)
    for(int j=0;j<4;j++)
    {
      if(s[i]==Gryffindor[j])
        c1++;
      if(s[i]==Slytherin[j])
        c4++;
      if(s[i]==Ravenclaw[j])
        c3++;
      if(s[i]==Hufflepuff[j])
        c2++;
    }
  if(c3>=c2&&c3>=c1&&c3>=c4)
      cout<<"Ravenclaw";
  else if(c4>c1&&c4>c3&&c4>c2)
   {
     if(c4==c3)
      cout<<"Ravenclaw";
    else
    cout<<"Slytherin";}
  else if(c1>c2&&c1>c3&&c1>c4)
   {if(c3==c1)
    cout<<"Ravenclaw";
    else if(c4==c1)
      cout<<"Slytherin";
    else
    cout<<"Gryffindor";}
  else{if(c2==c3)
    cout<<"Ravenclaw";
    else if(c2==c4)
      cout<<"Slytherin";
    else if(c2==c1)
      cout<<"Gryffindor";
    else
    cout<<"Hufflepuff";
  }
            
  cout<<"\n";}  }
  

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