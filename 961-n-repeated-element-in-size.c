int max(int a, int b) {
    return a > b ? a : b;
}

int repeatedNTimes(int *A, int ASize) {
    short N = ASize / 2, MAX = 0;
    short times[10000] = {0};

    for (int i = 0; i < ASize; ++i) {
        ++times[A[i]];
        MAX = max(MAX, A[i]);
    }

    for (int i = 0; i <= MAX; ++i) {
        if (times[i] == N) {
            return i;
        }
    }

    return -1;
}