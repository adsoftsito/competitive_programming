#include <stdio.h>

int main() {

  int  a, b, c = 1;
  while(scanf("%d %d", &a, &b) != EOF) 
    // notice the two \n
    printf("Case %d: %d\n\n",c++, a+b);   
  return 0;
}
