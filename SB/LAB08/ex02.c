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

float int2float(int value) {
  // seu código aqui...
  U u;
  int s = 0, e = 0, f = 0;
  if (value < 0) value = -value, s = 1;
  int pos = -1;
  for (int bit = 31; bit >= 0; bit--) {
    if (value & (1 << bit)) {
      pos = bit;
      break;
    }
  }
  e = pos + 127;
  if (pos > 23)  
  else if (pos == 23) 
  else 
  printf("%d\n", pos);
  printf("%d\n", e);
  u.i = makefloat(s, e, f);
  return u.f;
}

int main() {
  int i;
  printf("\n******** int2float ****************\n");

  i = 15213;
  int2float(i);
  /*
  i = 0;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));

  i = 1;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));

  i = -1;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));

  i = 12345;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));

  i = -12345;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));

  i = 13631488;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));

  i = 1879048192;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));

  i = 0x7fffffff;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));

  i = -i;
  printf(" %d -> %+10.4f, %+10.4f\n", i, (float)i, int2float(i));
  */
  return 0;
}