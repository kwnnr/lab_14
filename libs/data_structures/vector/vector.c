#include "vector.h"
vector createVector(size_t n) {
    int *memory = malloc(sizeof(int) * n);
    if (memory == NULL) {
        fprintf(stderr, "bad alloc");
        exit(1);
    } else
        return (vector){memory, 0, n};
}
void reserve(vector *v, size_t newCapacity) {
    v->data = (int*) realloc(v->data, sizeof(int) * newCapacity);
    if (v->data == NULL) {
        fprintf(stderr, "bad alloc");
        exit(1);
    } if (newCapacity == 0)
        v->data = NULL;
    if (v->size > newCapacity)
        v->size = newCapacity;
    v->capacity = newCapacity;
}
void clear(vector *v) {
    v->size = 0;
}
void shrinkToFit(vector *v) {
    v->capacity = v->size;
}
void deleteVector(vector *v) {
    free(v->data);
    v->size = 0;
    v->capacity =0;
}
