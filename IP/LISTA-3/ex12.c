    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
     
    void solve() 
    {
     
      char leitura;
      while(1){
     
        char matrix[100][51];
     
        int lin = 0, col = 0;
        int i, j;
     
        while(1){
          
          if(scanf("%c", &leitura) == EOF) return;
          if(leitura == ' '){
            lin++;
            col = 0;
            continue;
          }
     
          if(leitura == '\n'){
            lin++;
            break;
          }
     
          matrix[lin][col++] = leitura;
        }
        /*printf("lin = %d\n", lin);
        for(i = 0; i < lin; i++)
          printf("%s\n", matrix[i]);*/ 
      
        int c = 0;
        char carac = '[';
        for (i = 0; i < lin - 1; i++) {
          //somar a qtd de aliteracoes
          if (tolower(matrix[i][0]) == tolower(matrix[i+1][0]) && tolower(matrix[i][0]) != tolower(carac)) {
            c++;
            carac = matrix[i][0];
          }
     
          if(tolower(matrix[i][0]) != tolower(matrix[i+1][0])){
            carac = '[';
          }
     
        }
     
        printf("%d\n", c); 
      }
      }
     
    int main() 
    {
      int t = 1;
      // scanf("%d%*c", &t);
     
      while (t--) 
      {
        solve();
      }  
     
      return 0;
    }