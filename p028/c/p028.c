#include <stdio.h>

#define LIMIT 1001

int main(){

  int i, j, step = 0;
  long result = 1, n = 1;

  for (i = 3; i <= LIMIT; i += 2) {
    step += 2;
    for (j = 0; j < 4; j++) {
      n += step;
      result += n;
    }
  }

  printf("%ld\n", result);
  return 0;
}
