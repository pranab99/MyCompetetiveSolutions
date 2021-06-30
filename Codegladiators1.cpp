#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}
bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0;
 
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 

    return (j == m);
}


void solve()
{       

     string v;
    cin>>v;
    int n;
    cin>>n;
    string b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        isSubSequence(b[i],v,b[i].length(),v.length())?cout<<"POSITIVE" :
        cout<<"NEGATIVE";
        cout<<"\n";
    }

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