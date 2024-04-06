#include <stdio.h>
 
int main() {
   long long int population_a, population_b;
   int years = 0;
 
   scanf("%lld", &population_a);
   scanf("%lld", &population_b);
 
   while (population_a <= population_b) {
       population_a = population_a * 1.03;
       population_b = population_b * 1.015;
       years++;
   }
 
   printf("ANOS = %d\n", years);
 
   return 0;
}