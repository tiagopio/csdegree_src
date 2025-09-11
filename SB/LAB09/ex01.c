#include <stdio.h>
#include <math.h>
#include <limits.h>

#define getsig(x)        ((x)>>31 & 1)
#define getexp(x)        ((x)>>23 & 0xff)
#define getfrac(x)       ((x) & 0x7fffff)
#define makefloat(s,e,f) ((s & 1)<<31 | (((e) & 0xff) << 23) | ((f) & 0x7fffff))

typedef union {
  float f;
  unsigned int i;
} U; 

int float2int(float value) {
  // TODO: seu código aqui...
  U u;
  u.f = value;
  int s = getsig(u.i);
  int e = getexp(u.i);
  int f = getfrac(u.i);
  // printf("FRAC = %d\n", f);
  f |= (1 << 23);
  e -= 127;
  // printf("EXP = %d\n", e);
  if (s) s = -1;
  else s = 1;
  
  if (e < 0) return 0;
  if (e >= 31) return s * INT_MAX;
  if (e <= 23) f >>= (23 - e);
  if (e >= 31) f <<= (e - 23);
  // printf("FRAC = %d\n", f);
  // printf("SIG = %d\n", s);
  // int result = s * f;
  // printf("VAL %d\n", result);
  return s * f;
}

int main() {
  float f;
  printf("\n******** float2int ****************\n");

  f = 12345.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -0.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 0.5;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -0.5;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 0.125;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -0.125;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 1.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -1.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 1.5;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -1.5;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 2.5;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -2.5;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 5.4;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));
  
  f = -5.4;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 12345.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -12345.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 14690064.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -14690064.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = 167788544.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = -167788544.0;
  printf(" %+10.4f -> %d %d\n", f, (int)f, float2int(f));

  f = (float) pow(2,31);
  printf(" %+10.4f (2^31) = overflow -> %d %d\n", f, (int)f, float2int(f));

  f = -f;
  printf(" %+10.4f (-2^31) -> %d %d\n", f, (int)f, float2int(f));

  f = -((float) pow(2,32));
  printf(" %+10.4f (-2^32 = overflow) -> %d %d\n", f, (int)f, float2int(f));
  
  return 0;
}
