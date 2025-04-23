#include <stdio.h>

void print_bytes(int a) {
  for (char i = (sizeof(a) * 8) - 1; i >= 0; i--) {
    printf("%x", (a >> i) & 1);
    if (i % 8 == 0) {
      printf(" ");
    }
  }
  puts("");
}

void counting_units(int a) {
  char counter = 0;
  for (char i = (sizeof(a) * 8) - 1; i >= 0; i--) {
    if ((a >> i) & 1) {
      counter += 1;
    }
  }
  printf("Кол-во единиц = %d\n", counter);
}

void swap_third_byte(int a, int c) {
  a = (a & 0xFF00FFFF) | (((c & 0xFF) << 16));
  print_bytes(a);
}

int main() {
  int number;
  printf("input positive number: ");
  scanf("%d", &number); 
  print_bytes(number);
  counting_units(number);
  puts("");

  int third_byte;
  printf("input third byte: ");
  scanf("%d", &third_byte);
  swap_third_byte(number, third_byte);
  puts("");

  int negative;
  printf("input negative number: ");
  scanf("%d", &negative); 
  print_bytes(negative);

  return 0;
}