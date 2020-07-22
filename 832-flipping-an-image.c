int **flipAndInvertImage(int **A, int ASize, int *AColSize, int *returnSize, int **returnColumnSizes) {
    int **ret = (int **)malloc(ASize * sizeof(int *));
    int j, k;
    *returnColumnSizes = (int *)malloc(ASize * sizeof(int));

    for (int i = 0; i < ASize; ++i) {
        ret[i] = (int *)malloc((*AColSize) * sizeof(int));
        (*returnColumnSizes)[i] = *AColSize;

        for (j = 0, k = *AColSize - 1; j < k; ++j, --k) {
            if (A[i][k] == 0) {
                ret[i][j] = 1;
            } else {
                ret[i][j] = 0;
            }
            if (A[i][j] == 0) {
                ret[i][k] = 1;
            } else {
                ret[i][k] = 0;
            }
        }

        if (j == k) {
            if (A[i][j] == 0) {
                ret[i][j] = 1;
            } else {
                ret[i][j] = 0;
            }
        }
    }

    *returnSize = ASize;
    return ret;
}