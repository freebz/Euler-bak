#include <stdio.h>
#include <string.h>

#define LIMIT 1000

int main(){

  int i, result = 0;
  int num[LIMIT+1] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3,
		      6, 6, 8, 8, 7, 7, 9, 8, 8, 6,
  };

  num[30] = 6;
  num[40] = 5;
  num[50] = 5;
  num[60] = 5;
  num[70] = 7;
  num[80] = 6;
  num[90] = 6;
  num[1000] = 11;

  for (i = 21; i < 100; i++) {
    if (i % 10 != 0) {
      num[i] = num[i/10*10] + num[i%10];
    }
  }

  for (i = 100; i < 1000; i++) {
    if (i % 100 == 0) {
      num[i] = num[i/100] + 7;
    }
    else {
      num[i] = num[i/100*100] + num[i%100] + 3;
    }
  }

  for (i = 1; i <= 1000; i++) {
    result += num[i];
  }

  printf("%d\n", result);
  return 0;
}
