#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr_ptr;
  arr_ptr = (int*)malloc(5 * sizeof(int)); 
  
  for (int i = 0; i<100000; i++){
	  *(arr_ptr + i) = 0;
	  printf("%d: %p\n", i, arr_ptr + i); 
  }

  return 0;
}