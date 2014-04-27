#include <stdio.h>

#define LIMIT 1000

int main() {

  int a, b, c;
  
  for (a = 1; a < LIMIT; a++) {
    for (b = a; b < LIMIT; b++) {
      for (c = b; c < LIMIT; c++) {
	if (a + b + c == 1000 && a * a + b * b == c * c) {
	  goto out;
	}
      }
    }
  }

 out:
  printf("%d\n", a * b * c);
  return 0;
}
