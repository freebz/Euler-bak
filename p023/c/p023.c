#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define LIMIT 28123

int sumProperDivisors(int n);
bool isAbundannt(int n);

int main(){

  int i, j, result = 0;
  bool abundants[LIMIT + 1];
  bool sums[LIMIT + 1] = { false };
  
  for (i = 1; i <= LIMIT; i++) {
    abundants[i] = isAbundannt(i);
  }

  for (i = 1; i <= LIMIT; i++) {
    for (j = i; j <= LIMIT; j++) {
      if (i + j > LIMIT) {
	break;
      }
      if (abundants[i] && abundants[j]) {
	sums[i + j] = true;
      }
    }
  }

  for (i = 1; i <= LIMIT; i++) {
    if (sums[i] == false) {
      result += i;
    }
  }
  
  printf("%d\n", result);
  return 0;
}

int sumProperDivisors(int n) {
  int origin = n;
  int i, j, result = 1, cnt, sub;
  for (i = 2; i <= n; i++) {
    cnt = 0;
    while (n % i == 0) {
      n /= i;
      cnt++;
    }
    sub = 0;
    for (j = 0; j <= cnt; j++) {
      sub += pow(i, j);
    }
    result *= sub;
  }
  return result - origin;
}

bool isAbundannt(int n) {
  if (sumProperDivisors(n) > n) {
    return true;
  }
  return false;
}
