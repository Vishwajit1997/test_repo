#include<stdio.h>

int f(int i) {
}
int main ()
{ 
   printf("%d",f(f(f(f(f(1))))));
   
   return 0;
}