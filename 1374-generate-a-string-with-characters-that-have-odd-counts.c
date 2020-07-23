char *generateTheString(int n) {
    char *ret = (char *)calloc((n + 1), sizeof(char));
    if (n % 2 == 0) {
        ret[--n] = 'b';
    }

    for (int i = 0; i < n; ++i) {
        ret[i] = 'a';
    }

    return ret;
}