#include <stdio.h>

int main() {

  int  a, b;
  // scanf returns the number of items read
  while(scanf("%d %d", &a, &b) == 2) 
    printf("%d \n", a+b);   
  return 0;
}
