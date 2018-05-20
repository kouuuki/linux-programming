#include <stdio.h>

int hand(void) {
  for (int i = 0; i <= 100; i++) {
    printf("%d\n", i);
  }
  return 0;
}


int main(void) {
  int data;
  scanf("%d", &data);
  printf("%d\n", data);
  hand();
  return 0;
}
