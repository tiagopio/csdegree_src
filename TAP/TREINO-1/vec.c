#include <stdio.h>
```c
#include <stdlib.h>

typedef struct {
  int *data;
  size_t size;    
  size_t capacity; 
} Vector;

void vector_init(Vector *vec, size_t initial_capacity) {
  vec->data = (int *)malloc(initial_capacity * sizeof(int));
  vec->size = 0;
  vec->capacity = initial_capacity;
}

void vector_free(Vector *vec) {
  free(vec->data);
  vec->data = NULL;
  vec->size = 0;
  vec->capacity = 0;
}

void vector_resize(Vector *vec, size_t new_capacity) {
  vec->data = (int *)realloc(vec->data, new_capacity * sizeof(int));
  vec->capacity = new_capacity;
}

void vector_push_back(Vector *vec, int value) {
  if (vec->size == vec->capacity) {
    vector_resize(vec, vec->capacity * 2);
  }
  vec->data[vec->size++] = value;
}

void vector_pop_back(Vector *vec) {
  if (vec->size > 0) {
    vec->size--;
  }
}

void vector_insert(Vector *vec, size_t pos, int value) {
  if (pos > vec->size) {
    printf("Posição inválida\n");
    return;
  }
  if (vec->size == vec->capacity) {
    vector_resize(vec, vec->capacity * 2);
  }
  for (size_t i = vec->size; i > pos; --i) {
    vec->data[i] = vec->data[i - 1];
  }
  vec->data[pos] = value;
  vec->size++;
}

void vector_erase(Vector *vec, size_t pos) {
  if (pos >= vec->size) {
    printf("Posição inválida\n");
    return;
  }
  for (size_t i = pos; i < vec->size - 1; ++i) {
    vec->data[i] = vec->data[i + 1];
  }
  vec->size--;
}

void vector_print(Vector *vec) {
  for (size_t i = 0; i < vec->size; ++i) {
    printf("%d ", vec->data[i]);
  }
  printf("\n");
}

int main() {
  Vector vec;
  vector_init(&vec, 4);

  vector_push_back(&vec, 10);
  vector_push_back(&vec, 20);
  vector_push_back(&vec, 30);
  vector_print(&vec);


  vector_insert(&vec, 1, 15);
  vector_print(&vec);

  vector_erase(&vec, 2);
  vector_print(&vec); 
 
  vector_pop_back(&vec);
  vector_print(&vec); 

  vector_free(&vec);
  return 0;
}```