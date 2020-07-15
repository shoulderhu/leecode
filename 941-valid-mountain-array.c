bool validMountainArray(int *A, int ASize) {
    if (ASize < 3) {
        return false;
    }

    int hill = 0;

    for (int i = 1; i < ASize - 1; ++i) {
        if (A[i - 1] < A[i] && A[i] > A[i + 1]) {
            if (hill != 0) {
                return false;
            } else {
                hill = i;
            }
        }
    }

    if (hill == 0) {
        return false;
    }

    for (int i = 1; i <= hill; ++i) {
        if (A[i] <= A[i - 1]) {
            return false;
        }
    }

    for (int i = hill + 1; i < ASize; ++i) {
        if (A[i] >= A[i - 1]) {
            return false;
        }
    }

    return true;
}