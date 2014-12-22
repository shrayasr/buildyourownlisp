#include<stdio.h>

static char input[2048];

int main(int argc, char **argv) {

  puts("Lisf version 0.0.0.0.1");
  puts("Press Ctrl+C to exit\n");

  while(1) {
    fputs("λ ", stdout);
    fgets(input, 2048, stdin);
    printf("%s\n", input);
  }

  return 0;

}
