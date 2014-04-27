#include <stdio.h>

#define LIMIT 1000

int main() {

  int a, b, c;
  
  for (a = 1; a < LIMIT; a++) {
    for (b = a; b < LIMIT; b++) {
      c = LIMIT - a - b;
      if (a * a + b * b == c * c) {
	goto out;
      }
    }
  }

 out:
  printf("%d\n", a * b * c);
  return 0;
}
