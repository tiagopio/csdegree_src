    #include <stdio.h>
     
    int array[2];
     
    int *max(int *arr, int size) 
    {
      int i, m = arr[0], j = 0;
      for (i = 0; i < size; i++)
      {
        if (arr[i] > m)
        {
          m = arr[i];
          j = i;
        }
      }
      array[0] = m;
      array[1] = j;
      return array;
    }
     
    void solve(int *n, int size)
    {
      int l = n[size - 1], z = 0, x = 0;
      max(n, size);
      int i;
      for (i = 0; i < size; i++)
      {
        if (n[i] == l) z++;
      }
      printf("Nota %d, %d vezes\nNota %d, indice %d\n", l, z, array[0], array[1]);
    }
     
    int main()
    {
      int n, arr[10000];
     
      scanf("%d", &n);
     
      int i;
      for (i = 0; i < n; i++) scanf("%d", &arr[i]);
     
      solve(arr, n);
     
      return 0;  
    }