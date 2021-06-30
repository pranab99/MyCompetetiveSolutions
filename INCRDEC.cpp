#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
void solve()
{int n,temp=0,ct=0;
  cin>>n;
  int arr1[n/2],arr2[n/2+1],arr[n];

   
   
   int len1 = n/2, len2 = n/2+1; 
   for (int i = 0; i < n; i++)
   {
     cin>>arr[i];
   }
   int v= sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n/2; i++) 
        arr1[i] = arr[i]; 
   
    for (int i = n/2+1, j=0; i>=0,j<len2; i--,j++) 
        arr2[j] = arr[i]; 
  
    sort(arr1, arr1 + len1); 
  
    sort(arr2, arr2+len2, greater<int>()); 
    for (int i = 0; i < n; i++) { 
        if (i < n/2) 
            arr[i] = arr1[i]; 
  
        else { 
            arr[i] = arr2[len2 - 1]; 
            len2--; 
        } 
    } 
     
     for (int i = 0; i <n; ++i)
     { if(arr[n]==arr[n+1]&&arr[n]==arr[n-1])
       ct++;
     }
     if(ct==0)
     {
      cout<<"YES"<<"\n";
      for (int i = 0; i < n; ++i)
      {
         cout << arr[i] << " "; 
      }
     }
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