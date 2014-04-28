#include <stdio.h>

#define LIMIT 1000000

int hailstoneSeqLength(unsigned long n);

int main(){

  int i, n, len = 0, result = 0;
  for (i = 1; i <= LIMIT; i++) {
    n = hailstoneSeqLength(i);
    if (len < n) {
      result = i;
      len = n;
    }
  }

  printf("%d\n", result);
  return 0;
}

int hailstoneSeqLength(unsigned long n) {
  int ret = 1;
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
    ret++;
  }
  return ret;
}
