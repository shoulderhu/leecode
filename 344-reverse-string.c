void reverseString(char *s, int sSize) {
    int i = 0, j = sSize - 1, tmp;
    while (i < j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        ++i;
        --j;
    }
}