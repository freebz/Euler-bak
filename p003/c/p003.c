#include <stdio.h>
#include <math.h>

#define NUMBER 600851475143

int main() {

  unsigned long i;

  i = sqrt(NUMBER);		// 제곱근 보다 큰 수는 약수가 될수 없다.
  if (i % 2 == 0) i--;		// 짝수는 2를 제외하고 소수가 아니므로 홀수만 평가한다.
  
  for (; i > 1; i -= 2) {	// 짝수는 제외하고 뒤에서 부터 평가한다.
    if(isPrime(i)) {		// 소수이면서
      if (NUMBER % i == 0) {	// 지정된 수의 약수이다. (이러면 소인수 분해한 가장 큰수)
	break;
      }
    }
  }

  printf("%d", i);
  return 0;
}

int isPrime(unsigned long n) {
  unsigned long i;
  for(i = 2; i < sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
