#include <stdio.h>
#include <math.h>

#define LIMIT 10001

int isPrime(int n);

int main(){

  int n = 0, seq = 0;
  while (seq < LIMIT) {
    if (isPrime(++n)) {
      seq++;
    }
  }

  printf("%d\n", n);
  return 0;
}

int isPrime(int n) {
  int i;
  if (n < 2) {
    return 0;
  }
  for(i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
