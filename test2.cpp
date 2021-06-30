#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,1,2,5,8,8};
  int x=0;
  for(int i=0;i<7;i++){
    x=x^arr[i];
  }
  cout<<x;
}