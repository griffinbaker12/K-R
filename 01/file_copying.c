#include <stdio.h>

int main() {
  int c;
  printf("EOF is: %d\n", EOF);
  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  // need to clear after we hit EOF
  // EOF indicator will remain on stdin until then
  // and we can't read more characters
  clearerr(stdin);
  printf("\n");
  int misassigned = getchar() != EOF;
  printf("misassigned: %d\n", misassigned);
}
