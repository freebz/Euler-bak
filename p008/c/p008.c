#include <stdio.h>

#define ROWS 20
#define COLS 50
#define UNIT 5

int main(){

  int i, j, sub, result = 0;
  char temp[COLS + 1];
  int data[ROWS * COLS];
  FILE *fp = fopen("data.txt", "r");
  for (i = 0; i < ROWS; i++) {
    fscanf(fp, "%s", temp);
    for (j = 0; j < COLS; j++) {
      data[i * COLS + j] = temp[j] - 48;
    }
  }
  fclose(fp);

  for (i = 0; i < ROWS * COLS - UNIT; i++) {
    sub = 1;
    for (j = 0; j < UNIT; j++) {
      sub *= data[i + j];
    }
    if (sub > result) {
      result = sub;
    }
  }

  printf("%d\n", result);
  return 0;
}
