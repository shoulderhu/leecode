int *sumZero(int n, int *returnSize) {
    int *ret = (int *)malloc(n * sizeof(int));
    *returnSize = n;

    if (n % 2 == 1) {
        ret[--n] = 0;
    }

    for (int i = 0, j = 1; i < n; ++i) {
        ret[i] = j;
        if (j > 0) {
            j = j * -1;
        } else {
            j = j * -1 + 1;
        }
    }

    return ret;
}