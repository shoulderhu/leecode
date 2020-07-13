int *prisonAfterNDays(int *cells, int cellsSize, int N, int *returnSize) {
    int *ret = (int *)malloc(cellsSize * sizeof(int)), *tmp;

    N %= 14;
    if (N == 0) { N = 14; }

    for (int i = 1; i <= N; ++i) {
        ret[0] = 0;
        ret[cellsSize - 1] = 0;

        for (int j = 1; j < cellsSize - 1; ++j) {
            if ((cells[j - 1] ^ cells[j + 1]) == 0) {
                ret[j] = 1;
            } else {
                ret[j] = 0;
            }
        }

        tmp = cells;
        cells = ret;
        ret = tmp;
    }

    *returnSize = cellsSize;
    return cells;
}