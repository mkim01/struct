#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct basketball{
  char *name;
  int points;
  int rebounds;
  int assists;
};

struct basketball setup_player();
void printStat(struct basketball p1);
void modifyStat(struct basketball *p1, char *name, int newp, int newr, int newa);

struct basketball setup_player(){
  struct basketball player;
  srand(time(NULL));
  int randint = rand();
  if (randint % 3 == 0){
    player.name = "Anthony Davis";
  }
  if (randint % 3 == 1){
    player.name =  "Lebron James";
  }
  if (randint % 3 == 2){
    player.name = "Kevin Durant";
  }
  player.points = randint % 20 + 25;
  player.rebounds = randint % 5 + 5;
  player.assists = randint % 5 + 8;

  return player;
}

void printStat(struct basketball p1){
  printf("Player name: %s\n Points: %d\n Rebounds: %d\n Assists: %d", p1.name, p1.points, p1.rebounds, p1.assists);
}

void modifyStat(struct basketball *p1, char *newname, int newp, int newr, int newa){
  p1->name = newname;
  p1->points = newp;
  p1->rebounds = newr;
  p1->assists = newa;
}

int main(){
  struct basketball player = setup_player();
  printStat(player);
  printf("\n --Compared to Stephen Curry's 2018 Stat--\n");
  modifyStat(&player, "Stephen Curry", 27, 4 ,5 );
  printStat(player);
  return 0;
}
