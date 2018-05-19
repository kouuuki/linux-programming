#include <stdio.h>

void num(void) {
  printf("Hello\n");
}

int fizzbuzz(void) {
  for (int i = 0; i <= 100; i++) {
    if (i % 5 == 0) {
      printf("Fizz\n");
    } else if (i % 3 == 0) {
      printf("Buzz\n");
    } else {
      printf("%i\n", i);
    }
  }
  return 0;
}

int main(void) {
  // num();
  fizzbuzz();
  // int a = 0;
  // while (a < 10) {
  //   printf("%d\n", a);
  //   a++;
  // }
}
