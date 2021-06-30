#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define MAX 100005
using namespace std;

float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}
bool prime[MAX];
ll prefix[MAX], suffix[MAX];
 
// Precompute Sieve, Prefix array, Suffix array
void precompute(ll prefix[], ll suffix[])
{
    memset(prime, true, sizeof(prime));
 
    // Sieve of Eratosthenes
    for (int i = 2; i * i < MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i)
                prime[j] = false;
        }
    }
 
    prefix[1] = 1;
    suffix[MAX - 1] = 1e9 + 7;
 
    // Precomputing Prefix array.
    for (int i = 2; i < MAX; i++) {
        if (prime[i])
            prefix[i] = i;
        else
            prefix[i] = prefix[i - 1];
    }
 
    // Precompute Suffix array.
    for (int i = MAX - 1; i > 1; i--) {
        if (prime[i])
            suffix[i] = i;
        else
            suffix[i] = suffix[i + 1];
    }
}
 
// Function to solve each query
long long query(ll prefix[], ll suffix[], ll L, ll R)
{
    if (prefix[R] < L || suffix[L] > R)
        return -1;
    else
        return prefix[R] - suffix[L];
}
 


void solve()
{       
 long long l,r;
 cin>>l>>r;
  precompute(prefix, suffix);
 
 
cout << query(prefix, suffix, l, r);
 

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