#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

float roundoff(float value, unsigned char prec) {
	float pow_10 = pow(10.0f, (float)prec);
	return round(value * pow_10) / pow_10;
}




void solve() {

	long long n,flag=0,s=0;
	cin>>n;

    long long a=0,b=1,sum=0;

     if(n==0||n==1||n==2||n==3||n==5)
     {
     	cout<<0<<" "<<0<<" "<<n;
     	return;
     }



    for (int i = 2; i < n; ++i)
     {  
     	s=a+b;
     	
     	a=b;
     	b=s;
     	 if(s==n)
         {
         	cout<<0<<" "<<0<<" "<<n;
         	flag=1;
         	break;
         }
     }
      

	if(!flag)
	{
		cout<<"I'm too stupid to solve this problem";
	}


	
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