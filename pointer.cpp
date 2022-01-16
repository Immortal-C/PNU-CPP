#include "pointer.h"

void update(int* a, int* b){
    *a = *a + *b;
    *b = *a - 2 * *b;

}