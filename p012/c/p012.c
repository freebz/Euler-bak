#include <stdio.h>
#include <stdbool.h>

#define LIMIT 500

int triangleNumber(int n);
int divisorLength(int n);

int main(){

  int i = 0, n = 0, len = 0;
  while (len < LIMIT) {
    n = triangleNumber(++i);
    len = divisorLength(n);
  }

  printf("%d\n", n); 
  return 0;
}

int triangleNumber(int n){
  int i, result = 0;
  for (i = 1; i <= n; i++){
    result += i;
  }
  return result;
}

int divisorLength(int n){
  int i, result = 1, cnt;
  for (i = 2; i <= n; i++) {
    cnt = 0;
    while (n % i == 0) {
      n /= i;
      cnt++;
    }
    result *= (cnt+1);
  }
  return result;
}
