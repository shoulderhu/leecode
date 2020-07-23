int *finalPrices(int *prices, int pricesSize, int *returnSize) {
    int *ret = (int *)malloc(pricesSize * sizeof(int)), j = 0;
    memset(ret, -1, pricesSize * sizeof(int));

    for (int i = 0; i < pricesSize; ++i) {
        for (int j = i + 1; j < pricesSize; ++j) {
            if (prices[i] >= prices[j]) {
                ret[i] = prices[i] - prices[j];
                break;
            }
        }

        if (ret[i] == -1) {
            ret[i] = prices[i];
        }
    }

    *returnSize = pricesSize;
    return ret;
}