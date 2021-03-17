#include "bubblesort.h"

void bubbleSort(int *arr, int len){
  int move = 1;
  int temp;
  for (int i = 0; i < len; i++){
    move = 0;
    for (int j = 0; j < len - 1 - i; j++){
      if (arr[j] > arr[j + 1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        move = 1;
      }
    }
  }
}
