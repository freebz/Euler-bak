#include <stdio.h>

#define MAX 100

int main() {

  int i, sum = 0;
  long sumOfPow = 0, powOfSum;
  for (i = 1; i <= MAX; i++) {
    sum += i;
    sumOfPow += (i * i);
  }

  powOfSum = sum * sum;
  printf("%ld\n", powOfSum - sumOfPow);
  return 0;
}
