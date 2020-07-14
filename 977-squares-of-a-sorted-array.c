#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*((int *)a) - *((int *)b));
}

int *sortedSquares(int *A, int ASize, int *returnSize) {
    for (int i = 0; i < ASize; ++i) {
        A[i] = A[i] * A[i];
    }

    qsort(A, ASize, sizeof(int), compare);
    *returnSize = ASize;
    return A;
}