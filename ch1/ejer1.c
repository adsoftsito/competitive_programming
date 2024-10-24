#include <stdio.h>

int main() {

  int  TC, a, b;
  scanf("%d", &TC);         // number of test cases 
  while(TC--) {             // shortcut to repeat until 0
    scanf("%d %d", &a, &b); // compute answer
    printf("%d \n", a+b);   // on the fly
  }
  return 0;
}
