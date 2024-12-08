#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  int *ptr = &x;

  // Error Handling: Check for NULL pointer before dereferencing
  if (ptr == NULL) {
    fprintf(stderr, "Error: Pointer is NULL\n");
    return 1; // Indicate an error
  }

  *ptr = 20;
  printf("%d\n", x);

  //Further Example of robust memory management:
  int *dynamic_ptr = (int *)malloc(sizeof(int));
  if (dynamic_ptr == NULL){
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  *dynamic_ptr = 30;
  printf("%d\n", *dynamic_ptr);
  free(dynamic_ptr);
  return 0;
} 