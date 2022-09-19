#define TEST_ITER 1024

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("argument not given!");
    return 0;
  }

  int loopSize = atoi(argv[1]);
  printf("testing size %d\n", loopSize);

  for (int i=0; i<TEST_ITER; i++) {
    char* mem = malloc(sizeof(char)*loopSize);
    
    for(int j=0; j<loopSize; j++) {
      mem[j];
    }

  }


  return 0;
}