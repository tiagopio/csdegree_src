    #include <stdio.h>
     
    void bubble(int *a, int size, int reversed)
    {
      int i, j;
      if (reversed) {
        for (i = 0; i < size - 1; i++) {
          for (j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
              int tmp = a[j];
              a[j] = a[j + 1];
              a[j + 1] = tmp;
            }
          }
        }
      } else {
        for (i = 0; i < size - 1; i++) {
          for (j = 0; j < size - i - 1; j++) {
            if (a[j] < a[j + 1]) {
              int tmp = a[j];
              a[j] = a[j + 1];
              a[j + 1] = tmp;
            }
          }
        }
      }
     
    }
     
    int main()
    { 
      int n;
      scanf("%d", &n);
      if (n < 1 || n > 10000) return 0;
     
      int even[n], odd[n], e = 0, o = 0;
      
      int i;
      for (i = 0; i < n; i++)
      {
        int tmp;
        scanf("%d", &tmp);
        if (tmp % 2 == 0) {
          even[e] = tmp;
          e++;
        } else {
          odd[o] = tmp;
          o++;
        }
      }
      bubble(even, e, 1);
      bubble(odd, o, 0);
      for (i = 0; i < e; i++) {
        printf("%d\n", even[i]);
      }
      for (i = 0; i < o; i++) {
        printf("%d\n", odd[i]);
      }
    }