# include <stdio.h>

int main (void) {
  char str1[80] = "Hello";
  char str2[80] = "World!";
  int i, j;

  for(i = 0; str1[i]!='\0'; i++);

  for(j = 0; str2[j]!='\0'; i++, j++){
    str1[i] = str2[j];

    printf("i is %d\n", i);
    printf("j is %d\n", j);
  }

  str1[i] = str2[j];
  printf("%s\n", str1);
}
