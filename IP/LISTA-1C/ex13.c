#include <stdio.h>
 
int main() {
 
  int number, index, flag = 0;
  scanf("%d", &number);
 
  if (number < 0) { 
    printf("Numero invalido!");
    return 0;
  }
 
  if (number == 1  || number == 0)
    flag = 1;
 
  for (index = 2; index <= number / 2; index++) {
    if (number % index == 0) {
      flag = 1;
      break;
    }
  }
 
  if (flag == 0)
    printf("PRIMO\n");
  else
    printf("NAO PRIMO\n");
 
  return 0;
}