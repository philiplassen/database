#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 80

int main() {
  
  /* strings are array of characters 
   * terminated by the NULL character
   * which is different from '0' */
  
  char S[MAX_STRING_LEN];
  int l, i;
  
  S[0] = 'a';
  S[1] = 'b';
  S[2] = 'c';
  S[3] = 'd';
  S[4] = 'e';
  S[5] = 'g';
  S[6] = '0';
  S[7] = 0;

  l = strlen(S);

  printf("S:\t%s\n",S);
  printf("length:\t%d\n",l);
  
  /* print characters in S */
  
  printf("forward\n");
  for (i = 0; i < l; ++i) 
    printf("A[%d] = %c\n",i,S[i]);
  
  /* print characters in S backwards */
  
  printf("\nbackward\n");
  for (i = l-1; i >= 0; --i) 
    printf("A[%d] = %c\n",i,S[i]);
    
  
}
