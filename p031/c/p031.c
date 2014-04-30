#include <stdio.h>

#define LIMIT 200

int main(){

  int i, j;
  int data[LIMIT+1] = {1};
  int coin[] = {1, 2, 5, 10, 20, 50, 100, 200};
  int coinLen = sizeof(coin) / sizeof(coin[0]);

  for (i = 0; i < coinLen; i++) {
    for (j = coin[i]; j <= LIMIT; j++) {
      data[j] += data[j-coin[i]];
    }
  } 

  printf("%d\n", data[LIMIT]);
  return 0;
}
