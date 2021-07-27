#include<bits/stdc++.h>
using namespace std;


void solve() {

	int n,nonzero=0,sumLeadingDiag=0;
	cin>>n;
	int a[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n ; ++j)
		{
			cin>>a[i][j];
			if(a[i][j]!=0)nonzero++;

            if(j>i)
            sumLeadingDiag+=a[i][j];


		}


	}


	cout<<"The matrix is \n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}


	cout<<"The no of nonzero elements= "<<nonzero<<endl;
	cout<<"The sum of leading diagonal= "<<sumLeadingDiag<<endl;



	//Minor diagonal elements
    cout<<"Below Minor diag elements \n";
	int c=0;
	int i,j;
	for( i=0;i<n;i++)
	{
		
		for(j=n-1-i;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

   
    //product
   long long product_major = 1, product_minor = 1;
  for(int i = 0; i < n; ++i)
    {for(int j = 0; j < n; ++j)
      {if(i == j)
        product_major = product_major * a[i][j];
      }
    }
  for(int i = 0; i < n; ++i)
    {for(int j = 0; j < n; ++j)
      {if(i + j == (n- 1))
        product_minor = product_minor * a[i][j];
      }
    }
 cout<<"The product of the  Diagonal elements is: "<< product_major * product_minor;

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
