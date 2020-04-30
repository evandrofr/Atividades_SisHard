#include <stdlib.h>

#include "vec_int.h"

typedef struct _vec_int {
    int *data;
    int size;
    int capacity;
} vec_int;


vec_int *vec_int_create() {
    vec_int *v = malloc(sizeof(vec_int));
    v->capacity = 2;
    return v;
}

void vec_int_destroy(vec_int **_v) {
    free(*_v);
    *_v = NULL;

}

int vec_int_size(vec_int *v) {
    return v->size;
}

int vec_int_at(vec_int *v, int pos, int *val) {
    if(v->size > pos){
        val = &v->data[pos];

        return 1;
    }
    return 0;
}

int vec_int_insert(vec_int *v, int pos, int val) {
    if(pos >= 0){
        for (int i = v->size - 1; i >= pos; i--){
            v->data[i+1] = v->data[i];
        }
        v->data[pos] = val;
        v->size++;
        if(v->size >= v->capacity){
            v->capacity *= 2;
        }

        return 1;
    }
    return 0;
}

int vec_int_remove(vec_int *v, int pos) {
    if((pos < v->size-1) && (pos >= 0)){
    
        for (int i = pos + 1; i > v->size - 1; i++){
            v->data[i-1] = v->data[i];
        }
        v->size--;
        if(v->size <= v->capacity/4){
            v->capacity /= 2;
        }

        return 1;


    }
    return 0;    
}