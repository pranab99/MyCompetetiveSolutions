#include <iostream>
int fun(int n)
{
 static int x=0;
 if(n>0)
 {
 x++;
 std::cout<<"N ="<<n;         gf
 std::cout<<"X="<<x<<"\n";
 return n+fun(n-1)+x;
 }
 return 0;
}
int main() {
 int r;
 r=fun(5);
 printf("%d\n",r);

 r=fun(5);
 printf("%d\n",r);

 return 0;
}