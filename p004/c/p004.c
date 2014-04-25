#include <stdio.h>

#define LIMIT 999

int isPalindrom(int n);
int getReverse(int n);

int main() {

  int i, j, k, result = 0;
  for (i = 1; i < LIMIT; i++) {
    for (j = i; j < LIMIT; j++) {
      k = i * j;
      if (isPalindrome(k)) {
	if (result < k) {
	  result = k;
	}
      }
    }
  }

  printf("%d\n", result);
  return 0;
}

int isPalindrome(int n) {
  if (n == getReverse(n)) {
    return 1;
  }
  return 0;
}

int getReverse(int n) {
  int result = 0, i;
  while (n > 0) {
    result = result * 10 + (n % 10);
    n /= 10;
  }
  return result;
}
