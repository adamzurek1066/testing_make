#include <stdio.h>
#include <bubblesort.h>

int main(void){
  int arr[10] = {9,8,7,6,5,4,3,2,1,0};
  bubbleSort(arr, 10);

  for (int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
