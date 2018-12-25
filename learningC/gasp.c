#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
  printf("Gasp is a work in progress!\n");
  printf("\n");
  int i = 1;
  int argN = 0;
  int argI = 0;
 
  if (argc == 1) {
    printf("Not enough arguements provided\n");
    printf("Should be used as follows\n");
    printf("gasp string file1.txt...\n");
    return 0;
  }

  int j;
  for (j = 1; j < argc; j++) {
    printf("%d : %s\n", j, argv[j]);
  }
  argN += strcmp(argv[i], "-n");
  argI += strcmp(argv[i], "-i");

  if (argN || argI) {
    i = 2;
  }
  argN += strcmp(argv[i], "-n");
  argI += strcmp(argv[i], "-i");
  if (argN && argI) {
    i = 3; 
  }
  printf("Status of the -i flag : %d\n", argI);
  printf("Status of the -n flag : %d\n", argN);
  if (i > argc) {
    printf("Not enough arguments were provided\n");
    printf("A string and file name should have been provided");
    return 0;
  }

  printf("The String provided was %s\n", argv[i]);
  return 0;

}


void fileParse(char *string, char *fileName) {
  printf("FileParse has not been implemented");
}
