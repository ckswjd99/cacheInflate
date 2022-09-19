#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("argument not given!");
    return 0;
  }

  int loopSize = atoi(argv[1]);
  char* mem = malloc(sizeof(char)*loopSize);

  printf("testing size %d\n", loopSize);
  
  for(int i=0; i<loopSize; i++) {
    mem[i];
  }


  return 0;
}