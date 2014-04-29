#include <stdio.h>

#define ROWS 15

int main(){

  int i, j, n;
  int data[ROWS][ROWS];

  FILE *fp = fopen("data.txt", "r");
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j <= i; j++) {
      fscanf(fp, "%d", &data[i][j]);
    }
  }
  fclose(fp);

  for (i = ROWS - 1; i > 0; i--) {
    for (j = 0; j <= i; j++) {
      n = (data[i][j] > data[i][j+1])? data[i][j] : data[i][j+1];
      data[i-1][j] += n;
    }
  }

  printf("%d\n", data[0][0]);
  return 0;
}
