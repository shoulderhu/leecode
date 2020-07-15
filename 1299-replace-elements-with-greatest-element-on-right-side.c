#include <string.h>
#define MAX(a, b) (a > b ? a : b)

int *replaceElements(int *arr, int arrSize, int *returnSize) {
    int *ret = (int *)malloc(arrSize * sizeof(int));

    ret[arrSize - 1] = -1;
    for (int i = arrSize - 2; i >= 0; --i) {
        ret[i] = MAX(arr[i + 1], ret[i + 1]);
    }

    *returnSize = arrSize;
    return ret;
}