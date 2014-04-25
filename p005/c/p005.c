#include <stdio.h>

#define LIMIT 20

int main(){
  
  int i;
  long result = 1;
  
  while (1) {
    for (i = 1; i <= LIMIT; i++) {
      if (result % i != 0) {
	goto out;
      }
    }
    break;
  out:
    result++;
  }

  printf("%ld\n", result);
  return 0;
}
