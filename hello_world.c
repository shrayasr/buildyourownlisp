#include<stdio.h>

typedef struct {
  float x;
  float y;
} point;

int main(int argc, char **argv) {

  point p;
  p.x = 1.0;
  p.y = 2.0;

  puts("Hello, world");
  printf("%f %f\n", p.x, p.y);
  return 0;
}
