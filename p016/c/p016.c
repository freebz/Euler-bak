#include <stdio.h>

#define LIMIT 1000
#define LENGTH 400

int main(){

  int i, j, result = 0;
  unsigned long long n = 1;

  int data[LENGTH];
  
  for (i = 0; i < LENGTH; i++) {
    data[i] = 0;
  }
  data[0] = 1;

  for (i = 0; i < LIMIT; i++) {
    for (j = 0; j < LENGTH; j++) {
      data[j] *= 2;
    }
    for (j = 0; j < LENGTH - 1; j++) {
      while (data[j] > 9) {
	data[j+1] += 1;
	data[j] -= 10;
      }
    }
  }

  for (i = 0; i < LENGTH; i++) {
    result += data[i];
  }

  printf("%d\n", result);
  return 0;
}
