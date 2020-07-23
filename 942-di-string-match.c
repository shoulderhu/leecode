int *diStringMatch(char *S, int *returnSize) {
    *returnSize = strlen(S) + 1;
    int *ret = (int *)malloc((*returnSize) * sizeof(int));
    int i, j = 0, k = strlen(S);

    for (i = 0; i < strlen(S); ++i) {
        if (S[i] == 'I') {
            ret[i] = j++;
        } else{
            ret[i] = k--;
        }
    }

    ret[i] = j;
    return ret;
}