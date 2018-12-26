#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find(char *string, char *line, int argI, int argN, int lineNumber) {
  char cmp[strlen(string)];
  int j; 
  for (j = 0; j < strlen(string); j++) {
    if (argI) {
      cmp[j] = tolower(string[j]);
    } else {
      cmp[j] = string[j];
    }
  }
  int s;
  int i;
  if (strstr(line, cmp) != NULL) {
    if (argN) {
      printf("%d:", lineNumber);
    }
    printf("%s", line);
  }
}

  

void fileParse(char *string, char *fileName, int argI, int argN) {
  FILE *input_file;
  input_file = fopen(fileName, "r");
  int line = 0;
  if (input_file == NULL) {
    printf("File does not Exist\n");
    exit(1);
  }
  char str[100];
  while (fgets(str, 100, input_file) != NULL) {
    line += 1;
    find(string, str, argI, argN, line);
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

  fileParse(argv[i-1], argv[i], argI, argN);

  printf("The String provided was %s\n", argv[i]);
  return 0;

}


