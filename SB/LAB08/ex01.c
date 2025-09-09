#include <stdio.h>
#include <math.h>

#define getsig(i)        ((i)>>31 & 1)
#define getexp(i)        ((i)>>23 & 0xff)
#define getfrac(i)       ((i) & 0x7fffff)
#define makefloat(s,e,f) ( (((s) & 1) << 31) | (((e) & 0xff) << 23) | ((f) & 0x7fffff) )

typedef union {
  float f;
  unsigned int i;
} U;


float float2(float value) {
  // seu código aqui...
  U u;
  unsigned int s = 0;
  unsigned int e = 0;
  unsigned int f = 0;
  u.f = value;
  s = getsig(u.i);
  e = getexp(u.i);
  f = getfrac(u.i);
  e++;
  u.i = makefloat(s, e, f);
  return u.f;
}

int main() {
  double d;
  scanf("%lf", &d);
  printf("float2 = %lf\n", float2(d));
  return 0;
}