    #include <stdio.h>
     
    void solve(int *a, int s, int k)
    {
      int on_time = 0, i;
     
      for (i = 0; i < s; i++) if (a[i] <= 0) on_time++;
     
      if (on_time < k) printf("SIM\n");
      else {
        printf("NAO\n");
        for (i = s - 1; i >= 0; i--) if (a[i] <= 0) printf("%d\n", i + 1);
      }
    }
     
    int main()
    {
      int arr[1000];
      int n, k, i;
      scanf("%d%d", &n, &k);
      if (n < 0 || n > 1000 || k < 0 || k > 1000) return 0;
     
      for (i = 0; i < n; i++) scanf("%d", &arr[i]);
     
      solve(arr, n, k);
     
      return 0;
    }