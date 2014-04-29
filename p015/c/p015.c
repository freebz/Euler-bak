#include <stdio.h>

#define LIMIT 20

int main(){
  
  int i, j;
  long long data[LIMIT+1][LIMIT+1];

  for (i = 0; i <= LIMIT; i++) {
    data[0][i] = 1;
    data[i][0] = 1;
  }

  for (i = 1; i <= LIMIT; i++) {
    for (j = 1; j <= LIMIT; j++) {
      data[i][j] = data[i-1][j] + data[i][j-1];
    }
  }

  printf("%lld\n", data[LIMIT][LIMIT]);
  return 0;
}
