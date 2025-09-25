# Introdução ao Assembly

Complete o código da função process(), do arquivo "aux.c", de tal forma as letras da string str sejam alteradas para minúsculo. Assuma que a string possuirá apenas letras maiúsculas (não haverá números, espaço, etc.).

##### main.c
```c
#include <stdio.h>

extern char str[];
void process();

int main() {
  process();
  printf("%s\n", str);
  return 0;
}
```
##### aux.c
```c
char str[] = "BEBAMUITOCAFE";

void process()
{
   char *ptr = str;

   while (*ptr) {
      // Seu código aqui...
   }
}
```

### 2. Usando o arquivo abaixo como base, traduza o arquivo "aux.c" para Assembly o mais literal possível.

O código abaixo já possui um esqueleto da função process() com o while, mas não possui a definição da variável str nem o corpo do while. 

Você deve usar obrigatoriamente o registrador %r8 como sendo ptr (note que o linha de atribuição não está feita, vocês devem completar essa parte também).

Caso precise de registradores auxiliares, utilize: %rax, %rcx, %rdx, %rdi, %rsi, %r9, %r10, %r11 (e suas variações).

Atenção: comente o seu código indicando o que você está traduzindo.

##### aux.S

```asm
.data

# Definição da variável 'str' aqui...

.text
.globl process

process:
   pushq %rbp
   movq  %rsp, %rbp

   # Inicialização de 'ptr' aqui (Obs: utilize %r8 como sendo 'ptr')
   # ptr = str

beginwhile:
   cmpb $0, (%r8)

   je endwhile            # while() {

   # Bloco do while

   jmp beginwhile         # }

endwhile:

   leave
   ret
```

Para testar, compile o programa junto com o arquivo "main.c":

```bash
$ gcc -no-pie -o process-asm main.c aux.S
```

### 3. Seja o código C abaixo:

##### sum.c

```c
#include <stdio.h>

long sum = 0;
long vet[5] = {10, 20, 30, 40, 50};

int main()
{
   int i = 0;
   long *ptr = vet;
   while (i < 5) {
     sum = sum + *ptr;
     ptr++;
     i++;
   }

   printf("Soma: %ld\n", sum);
   return 0;
}
```

Utilize o arquivo abaixo como base e traduza o mais literal possível as partes que faltam do programa C.

Utilize obrigatoriamente o registrador %r8 como ptr  e %ecx como i.

Caso precise de registradores auxiliares, utilize: %rax, %rdx, %rdi, %rsi, %r9, %r10, %r11.

Atenção: comente o seu código indicando o que você está traduzindo.

##### sum.S

```asm
.section .rodata

fmt: .string "Soma: %ld\n"

.data

# Definição das variáveis aqui...

.text

.globl main

main:
   pushq %rbp
   movq  %rsp, %rbp
   # Inicializações de 'i' e 'ptr' aqui
   # Obs: utilize %ecx para 'i' e %r8 para 'ptr'

beginwhile:
   cmpl $5, %ecx

   jge  endwhile      # while() {

   # Bloco do while aqui...
   jmp beginwhile     # }

endwhile:
   movq $fmt, %rdi    # printf()
   movq sum, %rsi
   movl $0, %eax
   call printf

   movl $0, %eax      # return 0
   leave
   ret
```

Para testar, compile o programa:

```bash
$ gcc -no-pie -o sum sum.S
```

#### RECONHECIMENTO

##### Este material foi produzido por Noemi Rodriguez (PUC-Rio), Ana Lúcia de Moura (PUC-Rio) e Raúl Renteria (PUC-Rio), e adaptado por Bruno Silvestre (UFG).