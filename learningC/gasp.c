#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fileParse(char *string, char *fileName) {
  FILE *input_file;
  input_file = fopen(fileName, "r");
  int line = 0;
  if (input_file == NULL) {
    printf("File does not Exist\n");
    exit(1);
  }
  printf("The contencts of the file %s are : \n", fileName);
  char ch;
  while ((ch = fgetc(input_file)) != EOF) {
    printf("%c", ch);
  }
  fclose(input_file);
}

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
  argN += strcmp(argv[i], "-n") == 0;
  argI += strcmp(argv[i], "-i") == 0;

  if (argN || argI) {
    i = 2;
  }
  argN += strcmp(argv[i], "-n") == 0;
  argI += strcmp(argv[i], "-i") == 0;
  if (argN + argI == 2) {
    i = 3; 
  }
  printf("Status of the -i flag : %d\n", argI);
  printf("Status of the -n flag : %d\n", argN);
  if (i > argc - 1) {
    printf("Not enough arguments were provided\n");
    printf("A string and file name should have been provided");
    return 0;
  }
  printf("The String provided was %s\n", argv[i]);
  i += 1;
  if (i > argc) {
    printf("No File was provided");
    return 0;
  }

  fileParse(argv[i-1], argv[i]);

  printf("The String provided was %s\n", argv[i]);
  return 0;

}


