    #include <stdio.h>
     
    int max(int *arr, int size) 
    {
      int i, m = arr[0], j = 0;
      for (i = 0; i < size; i++)
      {
        if (arr[i] > m)
        {
          m = arr[i];
        }
      }
     
      return m;
    }
     
    int main()
    {
      int arr[10000]; 
      int n;
     
      while (1)
      {
        scanf("%d", &n);
        if (n == 0) break;
        if (n < 1 || n > 10000) break;
     
        int i;
        for (i = 0; i < n; i++)
          scanf("%d", &arr[i]);
        
     
        int m = max(arr, n);
     
        int s = 0;
        while (s <= m)
        {
          int j, c = 0;
          for (j = 0; j < n; j++)
          {
            if (arr[j] <= s) c++;
          }
          printf("(%d) %d\n", s, c);
          s++;
        }
     
      }
     
    }