#include <stdio.h>

long fibo(long n);

int main() {
  int i = 1;
  long result = 0, f = 0;
  while (f < 4000000) {
    f = fibo(i++);
    if (f % 2 == 0) {
      result += f;
    }
  }

  printf("%ld\n", result);
  return 0;
}

long fibo(long n) {
  if (n == 1) return 1;
  if (n == 2) return 2;
  return fibo(n-1) + fibo(n-2);
}
