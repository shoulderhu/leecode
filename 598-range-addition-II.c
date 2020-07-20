int min(int a, int b) {
    return a < b ? a : b;
}

int maxCount(int m, int n, int **ops, int opsSize, int *opsColSize) {
    if (opsSize == 0) {
        return m * n;
    }

    int row = ops[0][0], col = ops[0][1];

    for (int i = 1; i < opsSize; ++i) {
        row = min(row, ops[i][0]);
        col = min(col, ops[i][1]);
    }

    return row * col;
}