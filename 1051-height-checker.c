#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return ((*(int *)a) - (*(int *)b));
}

int heightChecker(int *heights, int heightsSize) {
    int *copy = (int *)malloc(heightsSize * sizeof(int));
    int move = 0;

    memcpy(copy, heights, heightsSize * sizeof(int));
    qsort(copy, heightsSize, sizeof(int), compare);

    for (int i = 0; i < heightsSize; ++i) {
        if (heights[i] != copy[i]) {
            ++move;
        }
    }

    return move;
}