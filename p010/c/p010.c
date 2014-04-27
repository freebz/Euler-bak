#include <stdio.h>
#include <stdbool.h>

#define LIMIT 2000000

int isPrime(int n);

int main(){

  int i = 0;
  __int64 result = 0;

  /*
    에라토스테네스의 체로 구현하면 더 빠름
  int j;
  bool prime[LIMIT + 1];
  
  for (i = 0; i <= LIMIT; i++) {
    prime[i] = true;
  }

  for (i = 2; (i*i) <= LIMIT; i++) {
    if (prime[i]) {
      for(j = i*i; j<= LIMIT; j += i) {
	prime[j] = false;
      }
    }
  }

  for (i = 2; i < LIMIT; i++) {
    if (prime[i]) {
      result += i;
    }
  }
  */

  while(i < LIMIT) {
    if(isPrime(++i)) {
      result += i;
    }
  }

  printf("%lld\n", result);
  return 0;
}

int isPrime(int n) {
  int i;
  if (n < 2) {
    return false;
  }
  for(i = 2; i*i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
