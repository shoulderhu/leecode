int *selfDividingNumbers(int left, int right, int *returnSize) {
    int *ret = (int *)malloc((right - left + 1) * sizeof(int)), j;
    bool isDiv;
    *returnSize = 0;

    for (int i = left; i <= right; ++i) {
        j = i;
        isDiv = true;

        while (j != 0) {
            if (j % 10 == 0 || i % (j % 10) != 0) {
                isDiv = false;
                break;
            }
            j /= 10;
        }

        if (isDiv) {
            ret[(*returnSize)++] = i;
        }
    }

    ret = realloc(ret, (*returnSize) * sizeof(int));
    return ret;
}