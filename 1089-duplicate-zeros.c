#include <string.h>

void duplicateZeros(int *arr, int arrSize) {
    int tmp[20000], start = 0, end = 0;
    memset(tmp, -1, sizeof(tmp));

    for (int i = 0; i < arrSize; ++i) {
        if (tmp[start] != -1) {
            tmp[end] = arr[i];
            arr[i] = tmp[start];
            ++start;
            ++end;
        }
        if (arr[i] == 0 && i + 1 < arrSize) {
            tmp[end] = arr[i + 1];
            arr[i + 1] = 0;
            ++end;
            ++i;
        }
    }
}