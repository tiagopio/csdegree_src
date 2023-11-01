#include <stdio.h>
 
int main() {
  int worker_id;
  double work_hours, value_per_hour;
    
  while (1) {
    scanf("%d %lf %lf", &worker_id, &work_hours, &value_per_hour);
        
    if (worker_id == 0) {
      break;
    }
        
    double salary = work_hours * value_per_hour;
        
    printf("%d %.2lf\n", worker_id, salary);
  }
    
  return 0;
}