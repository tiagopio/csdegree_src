```c
// ESTACAO DE TREM
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 1000

int main() {
    int n, i;
    char buffer[10000]; // Para leitura em bloco

    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        sscanf(buffer, "%d", &n);
        if (n == 0) break;

        while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
            int sequence[MAXN], stack[MAXN], top = -1;
            int current = 1, possible = 1;

            char *token = strtok(buffer, " ");
            if (token == NULL || atoi(token) == 0) {
                printf("\n");
                break;
            }

            sequence[0] = atoi(token);
            for ( i = 1; i < n; i++) {
                token = strtok(NULL, " ");
                sequence[i] = atoi(token);
            }

            for (i = 0; i < n; i++) {
                while (current <= sequence[i]) {
                    stack[++top] = current++;
                }

                if (stack[top] == sequence[i]) {
                    top--;
                } else {
                    possible = 0;
                    break;
                }
            }

            if (possible) {
                printf("sim\n");
            } else {
                printf("nao\n");
            }
        }
    }

    return 0;
}
```