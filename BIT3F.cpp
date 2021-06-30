#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{ int cost=0,r=0;
  string s;
  cin>>s;


 for (int i = 0; i <s.length(); i++)
 {
   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    cost+=0;
  else
   { 
  
            if (s[i] > 'a' && s[i] < 'e') { 
  
               
                r=min(abs(s[i] - 'a') ,abs(s[i] - 'e')); 
                   cost+=r; 
               
            } 
            else if (s[i] > 'e' && s[i] < 'i') { 
                r=min(abs(s[i] - 'e') , abs(s[i] - 'i'));
                  cost+=r;
            } 
            else if (s[i] > 'i' && s[i] < 'o') { 
                r=min(abs(s[i] - 'i') ,abs(s[i] - 'o')); 
                   cost+=r;
               
            } 
            else if (s[i] > 'o' && s[i] < 'u') { 
                r=min(abs(s[i] - 'o') ,abs(s[i] - 'u')); 
                   
                cost+=r;
            } 
            else if (s[i] > 'u') 
               cost+=abs(s[i] - 'u');

           }
}
 cout<<cost;
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