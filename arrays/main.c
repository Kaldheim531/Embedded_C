#include <stdio.h>

#define N1  3
#define N2  5
#define N3  5

void matrix(int arr[N1][N1]) {
  for (unsigned int i = 0; i < N1; i++) {
    for (unsigned int j = 0; j < N1; j++) {
      arr[i][j] = (i * N1) + j + 1;
      printf("%d ", arr[i][j]);
    }  
    putchar('\n');
  }
  putchar('\n');
}

void reverse(int arr[N2]) {
  for (unsigned int i = 0; i < N2; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }
  putchar('\n');
  
  for (unsigned int i = 0; i < N2 / 2; i++) {
    int t = arr[i];
    arr[i] = arr[N2 - 1 - i];
    arr[N2 - 1 - i] = t;
  }

  for (unsigned int i = 0; i < N2; i++) {
    printf("%d ", arr[i]);
  }

  putchar('\n');
}

void triangle_matrix(int arr[N1][N1]) {
  putchar('\n');
  for (unsigned int i = 0; i < N1; i++) {
    for (unsigned int j = 0; j < N1; j++) {
      if (i + j <= (N1) / 2) {
        arr[i][j] = 0;
      } else {
        arr[i][j] = 1;
      }
     
      printf("%d ", arr[i][j]);
    }  
    putchar('\n');
  }
  
}

void snail_matrix(int arr[N3][N3]) {
  int value = 1;
  int layer;
  
  for (layer = 0; layer < (N3 + 1) / 2; layer++) {
    for (int j = layer; j < N3 - layer; j++) {
      arr[layer][j] = value++;
    }
    
    for (int i = layer + 1; i < N3 - layer; i++) {
      arr[i][N3 - 1 - layer] = value++;
    }
    
    if (layer < N3 - 1 - layer) {
      for (int j = N3 - 2 - layer; j >= layer; j--) {
        arr[N3 - 1 - layer][j] = value++;
      }
    }
    
    if (layer < N3 - 1 - layer) {
      for (int i = N3 - 2 - layer; i > layer; i--) {
        arr[i][layer] = value++;
      }
    }
  }
}

void print_matrix(int arr[N3][N3]) {
  for (int i = 0; i < N3; i++) {
    for (int j = 0; j < N3; j++) {
      printf("%2d ", arr[i][j]);
    }
    putchar('\n');
  }
}

int main() {
  puts("");
  int arr1[N1][N1];
  matrix(arr1);

  int arr2[N2];
  reverse(arr2);

  triangle_matrix(arr1);
  puts("");

  int arr3[N3][N3];
  snail_matrix(arr3);
  print_matrix(arr3);

  return 0;
}