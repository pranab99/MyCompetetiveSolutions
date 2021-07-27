#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

void printSubsequence(string input, string output)
{

    if (input.empty()) {
        cout << output << endl;
        return;
    }
 

    printSubsequence(input.substr(1), output + input[0]);
 

    printSubsequence(input.substr(1), output);
}

void solve() {
 string s,c="chokudai";

cin>>s;
 printSubsequence(s,c);

  
 
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