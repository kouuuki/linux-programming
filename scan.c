#include <stdio.h>

int hand();
int sw();
int sum();

int main(void) {
  // // int data;
  // // scanf("%d", &data);
  // // printf("%d\n", data);
  // // hand();
  // // sw();
  // sum(90, 30);
  char c  = 'A';
  printf("%c\n", c);
  return 0;
}


int hand(void) {
  for (int i = 0; i <= 100; i++) {
    printf("%d\n", i);
  }
  return 0;
}

int sw(void) {
  int i = 10;

  switch (i) {
    case 1:
      printf("Hello\n");
      break;
    case 10:
      printf("World\n");
      break;
  }
  return 0;
}

// sum

int sum(int a, int b){
  int sum = a * b;
  printf("%d\n", sum);
  return 0;
}
