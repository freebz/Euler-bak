#include <stdio.h>

#define ROWS 20
#define COLS 20
#define UNIT 4

int main(){
  
  int i, j, k, result = 0;
  int sub[4];
  int temp;
  int data[ROWS][COLS];
  FILE *fp = fopen("data.txt", "r");
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      fscanf(fp, "%d", &temp);
      data[i][j] = temp;
    }
  }
  fclose(fp);

  // 가로
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {

      sub[0] = 1;
      sub[1] = 1;
      sub[2] = 1;
      sub[3] = 1;

      for (k = 0; k < UNIT; k++) {
	// 가로
	if (j < COLS - UNIT) {
	  sub[0] *= data[i][j+k];
	}
	
	// 세로
	if (i < ROWS - UNIT) {
	  sub[1] *= data[i+k][j];
	}

	// 대각선
	if (i < ROWS - UNIT && j < COLS - UNIT) {
	  sub[2] *= data[i+k][j+k];
	  sub[3] *= data[i+k][j+UNIT-k];
	}
      }

      for (k = 0; k < 4; k++) {	
	if (result < sub[k]) {
	  result = sub[k];
	}
      }
    }
  }
   
  printf("%d", result);
  return 0;

}
