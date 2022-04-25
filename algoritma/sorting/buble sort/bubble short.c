#include <stdio.h>

void bubbleSort(int arr[], int n){
  int a, m, tmp;
  for(a = 0; a < n; a++){
    for(m=0; m < n-a-1; m ++){
      if(arr[m] > arr[m+1]){
        tmp = arr[m];
        arr[m] = arr[m+1];
        arr[m+1] = tmp;
      }
    }
  }
}
int main() {
  int array[100], x, a, m;
  printf("Masukkan banyaknya elemen: ");
  scanf("%d", &x);
  printf("Masukkan angka: \n");
  for(a = 0; a < x; a++){
    scanf("%d", &array[a]);
  }
  bubbleSort(array, x);
  printf("Hasil pengurutan adalah :\n");
  for(a = 0; a < x; a++){
    printf("%d ", array[a]);
  }
  printf("\n");
}
