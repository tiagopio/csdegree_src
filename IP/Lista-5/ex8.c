#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct {
  int id, day, month, year;
  char * name;
} student;
 
int comp(student a, student b) {
  if (a.year < b.year) return 1;
  if (a.year > b.year) return 0;
 
  if (a.month < b.month) return 1;
  if (a.month > b.month) return 0;
 
  if (a.day < b.day) return 1;
  if (a.day > b.day) return 0;
 
  return 1;
}
 
void bubble(student * list, int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j  < size - 1 - i; j++) {
      if (comp(list[j], list[j + 1])) {
        student tmp = list[j + 1];
        list[j + 1] = list[j];
        list[j] = tmp; 
      }
    }
  }
}
 
void solve() {
  int n, i; scanf("%d", &n);
  student *list = (student*)malloc(n * sizeof(student));
  for (i = 0; i < n; i++) {
    scanf("%d%d%d%d%*c", &list[i].id, &list[i].day, &list[i].month, &list[i].year);
    list[i].name = (char*)malloc(200 * sizeof(char));
    scanf("%200[^\n]%*c", list[i].name);
  }
  bubble(list, n);
  for (i = 0; i < n; i++) {
    printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d \n", list[i].id, list[i].name, list[i].day, list[i].month, list[i].year);
  }
}
 
int main() {
  int t = 1;
  //scanf("%d", &t);
 
  while(t--) {
    solve();
  }
  return 0;
}