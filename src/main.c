#define TEST_ITER 1024

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("argument not given!");
    return 0;
  }

  int loopSize = atoi(argv[1]);
  int test_iter = argc == 3 ? atoi(argv[2]) : TEST_ITER;
  printf("testing size %d, repeating %d\n", loopSize, test_iter);

  for (int i=0; i<test_iter; i++) {
    char* mem = malloc(sizeof(char)*loopSize);
    
    for(int j=0; j<loopSize; j++) {
      mem[j];
    }

    free(mem);
  }


  return 0;
}