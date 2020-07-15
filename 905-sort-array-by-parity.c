#include <string.h>

int *sortArrayByParity(int *A, int ASize, int *returnSize) {
    int *ret = (int *)malloc(ASize * sizeof(int));
    int j = 0, k = ASize - 1;

    for (int i = 0; i < ASize; ++i) {
        if (A[i] % 2 == 0) {
            ret[j++] = A[i];
        } else {
            ret[k--] = A[i];
        }
    }

    *returnSize = ASize;
    return ret;
}