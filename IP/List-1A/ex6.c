#include <stdio.h>

void read_data(int* hours, int* minutes, int* seconds)
{
  scanf("%d %d %d", hours, minutes, seconds);
}

int convert_to_seconds(int hours, int minutes, int seconds)
{
  return (hours * 3600) + (minutes * 60) + seconds;
}

int main()
{
  int hours, minutes, seconds, total_seconds;
  
  read_data(&hours, &minutes, &seconds);
  total_seconds = convert_to_seconds(hours, minutes, seconds);

  printf("O TEMPO EM SEGUNDOS E = %d\n", total_seconds);

  return 0;
}
