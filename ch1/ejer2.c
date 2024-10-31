#include <stdio.h>

int main() {

  int  a, b;
  // stop when both integers are 0
  while(scanf("%d %d", &a, &b), (a || b)) 
    printf("%d \n", a+b);   
  return 0;
}
