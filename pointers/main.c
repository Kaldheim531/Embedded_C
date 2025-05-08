#include <stdio.h>
#include <string.h>
int swap(int num, int num2){
    char *ptr;
    ptr = (char *) & num;
    ptr += 2;
    *ptr = num2;
    return num;   
}

char *search(char line[], char subline[]) {
  char *ptr = NULL;
  int len_line = strlen(line);
  int len_subline = strlen(subline);
  
  for (int i = 0; i <= len_line - len_subline; i++) {
      int j;
      for (j = 0; j < len_subline; j++) {
          if (line[i + j] != subline[j]) {
              break;
          }
      }
      if (j == len_subline) {
          ptr = &line[i];  
          return ptr;
      }
  }
  return ptr; 
}

int main(void)
{
  int num;
  printf("Введите число: ");
  scanf("%d", &num);
  int third_byte;
  printf("Введите 3-й байт: ");
  scanf("%d", &third_byte);
  printf("Итогове число = %d\n", swap(num, third_byte));


  float x = 5.0;
  printf("x = %f, ", x);
  float y = 6.0;
  printf("y = %f\n", y);
  float *xp = &y; 
  float *yp = &y;
  printf("Результат: %f\n", *xp + *yp);


  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int *ptr = arr;
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
    printf("%d ", *ptr);
    ptr++;
  }


  putchar('\n');
  char line[80];
  char subline[80];
  printf("Введите строку: ");
  scanf("%s", line);
  printf("Введите подстроку: ");
  scanf("%s", subline);
  printf("%p\n", search(line, subline));
  
}
