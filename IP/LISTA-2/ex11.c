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
     
    int min(int *arr, int size) 
    {
      int i, m = arr[0], j = 0;
      for (i = 0; i < size; i++)
      {
        if (arr[i] < m)
        {
          m = arr[i];
        }
      }
     
      return m;
    }
     
    void solve(int *v, int size)
    {
      int w[size];
      int i, j = size - 1;
      
      for (i = 0; i < size; i++)
      {
        w[i] = v[j];
        j--;
      }
     
      for (i = 0; i < size; i++) printf("%d ", v[i]);
      printf("\n");
      for (i = 0; i < size; i++) printf("%d ", w[i]);
      printf("\n%d\n", max(v, size));
      printf("%d\n", min(w, size));
    }
     
    int main()
    {
      int arr[1000];
      int n;
      scanf("%d", &n);
      if (n < 1 || n > 1000) return 0;
     
      int i;
      for (i = 0; i < n; i++) scanf("%d", &arr[i]);
     
      solve(arr, n);
     
      return 0;
    }