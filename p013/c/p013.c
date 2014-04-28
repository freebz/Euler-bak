#include <stdio.h>

#define ROWS 100
#define COLS 50
#define PRE 1

int main(){
  
  int i, j, n;
  int result[COLS+PRE] = {0};

  char temp[COLS+1];
  FILE *fp = fopen("data.txt", "r");
  for (i = 0; i < ROWS; i++) {
    fscanf(fp, "%s", temp);
    for (j = 0; j < COLS; j++) {
      result[j+PRE] += temp[j] - 48;
    }
  }
  fclose(fp);
  
  for (i = COLS + PRE; i > 0; i--) {
    while (result[i] >= 10) {
      result[i-1]++;
      result[i] -= 10;
    }
  }

  for (i = 0; i < 10; i++) {
    printf("%d", result[i]);
  }
  printf("\n");

  return 0;
}
