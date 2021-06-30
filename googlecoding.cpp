#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char, int> m; 
    for (int i = 0; i < s.length(); i++) { 
        m[s[i]]++; 
    } 
  
   
    string new_string = ""; 
  
    for (int i = 0; i < n; i++) { 
   
        if (m[s[i]] % 2 == 0) 
            continue; 

        new_string += s[i]; 
    } 
  if(new_string.length()==0)
    cout<<"YES";
  else
    cout<<"NO";
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