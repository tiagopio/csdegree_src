#include <stdio.h>
 
#define POPULAR 1.00
#define GERAL 5.00
#define BLEACHERS 10.00
#define CHAIRS 20.00
 
typedef struct {
  int geral_pulic;
  double popular_percent, geral_percent, bleachers_percent, chairs_percent;
} Game; 
 
void read_data(Game* game)
{
  scanf("%d %lf %lf %lf %lf", &game->geral_pulic, &game->popular_percent, &game->geral_percent, &game->bleachers_percent, &game->chairs_percent);
}
 
double calc_revenue(Game game)
{
  double popular = (game.popular_percent / 100) * game.geral_pulic * POPULAR;
  double geral = (game.geral_percent / 100) * game.geral_pulic * GERAL;
  double bleachers = (game.bleachers_percent / 100) * game.geral_pulic * BLEACHERS;
  double chairs = (game.chairs_percent / 100) * game.geral_pulic * CHAIRS;
 
  return popular + geral + bleachers + chairs;
}
 
int main()
{
  int games_number;
  
  scanf("%d", &games_number);
  
  int count = 1;
 
  while (count <= games_number)
  {
    Game game;
    read_data(&game);
    printf("A RENDA DO JOGO N. %d E = %.2lf\n", count, calc_revenue(game));
    count++;
  }
  
  return 0;
}