#include<stdio.h>  
#define R 10 
#define C 20 

signed main() 
{ 
   int (*p)[R][C]; 
   printf("%d",  sizeof(p)); 
   getchar(); 
   return 0; 
} 