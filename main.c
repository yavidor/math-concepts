#include "main.h"
#include <stdio.h>

int main(void) {
    struct Matrix matInstance = {10,10};
    struct Matrix *mat = &matInstance;
    mat->m = 10;
    mat->n = 20;
    matInstance.m = 15;
    printf("Matrix(%dx%d)", mat->m, mat->n);
    printf("Matrix(%dx%d)", matInstance.m, matInstance.n);
    return 0;
}
