bool checkIfExist(int *arr, int arrSize) {
    int zero = 0;
    bool isSeen[2001] = {0};

    for (int i = 0; i < arrSize; ++i) {
        isSeen[arr[i] + 1000] = true;
        if (arr[i] == 0) {
            if (++zero == 2) {
                return true;
            } else {
                continue;
            }
        }
        if ((-500 <= arr[i] && arr[i] <= 500 && isSeen[arr[i] * 2 + 1000]) ||
            (arr[i] % 2 == 0 && isSeen[arr[i] / 2 + 1000])) {
            return true;
        }
    }

    return false;
}