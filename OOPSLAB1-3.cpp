#include<bits/stdc++.h>
#define mod 1000000007
#define mp make_pair
#define pb push_back
typedef long double ld;
typedef long long ll;
using namespace std;
void solve()
  {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
  cin>>a>>b>>c;
    discriminant = b * b - 4 * a * c;

  
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout<<root1<<" "<<root2<<" are distinctive roots";
    }

  
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        cout<<"Roots are equal"<<root1;
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
       cout<<" Roots are imaginary"<<realPart<<imagPart;
    }

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
   {solve();
    cout<<"\n";}

   cerr<<"\n"<<(float)clock()/CLOCKS_PER_SEC*1000<<" ms"<<endl;

   return 0;
}