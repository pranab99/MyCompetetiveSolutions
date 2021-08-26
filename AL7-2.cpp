#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}


struct Item {
    int value, weight;
 
   
    Item(int value, int weight)
    {
       this->value=value;
       this->weight=weight;
    }
};
 

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n)
{
  
    sort(arr, arr + n, cmp);

    
 
    int curWeight = 0; 
    double finalvalue = 0.0; 
 
   
    for (int i = 0; i < n; i++) {
    
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
 
        else {
            int remain = W - curWeight;
            finalvalue += arr[i].value
                          * ((double)remain
                             / (double)arr[i].weight);
            break;
        }
    }
 
    return finalvalue;
}


void solve() {

	int W = 50; 
    Item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n);

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
