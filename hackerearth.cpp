#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int minimumDistance(int a[], int n)  
{  
  
 
    map<int,int> hmap; 
  
    int minDistance = INT_MAX;  
  
    int previousIndex = 0, currentIndex = 0;  
  
    
    for (int i = 0; i < n; i++) {  
  
        if (hmap.find(a[i])!=hmap.end()) {  
            currentIndex = i;  
  
            previousIndex = hmap[a[i]];  
  
         
            minDistance = min((currentIndex -  
                        previousIndex),minDistance);  
        }  
   
        hmap[a[i]] = i;  
    }  
   
    return (minDistance == INT_MAX ? -1 : minDistance);  
}  
void solve() 
{ 
     
int n;
cin>>n;
int A[n];

for (int i = 0; i < n; ++i)
{
  cin>>A[i];
}


    cout << minimumDistance(A, n);
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