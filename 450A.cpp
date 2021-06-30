#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
   float pow_10 = pow(10.0f, (float)prec);
   return round(value * pow_10) / pow_10;
}

void solve() {
   ll n, k, max = 0, index;
   cin >> n >> k;
   vector<int>v;
   for (int i = 0; i < n; ++i) {
      float a;
      cin >> a;

      a = ceil(a / k);
      v.push_back(a);

   }


   max = *max_element(v.begin(), v.end());

   for(int j = n - 1; j >= 0; j--) {
      if(v[j] == max) {
         index = j + 1;
         break;
      }
   }




   cout << index;

}

signed main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
#ifdef Pranab
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

   int t = 1;
   // cin>>t;

   while(t--) {
      solve();
      cout << "\n";
   }

   cerr << "\n" << (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;

   return 0;
}