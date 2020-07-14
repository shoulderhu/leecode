int findNumbers(int *nums, int numsSize) {
    int digit, even = 0;

    for (int i = 0; i < numsSize; ++i) {
        digit = 0;

        while (nums[i] != 0) {
            nums[i] /= 10;
            ++digit;
        }

        if (digit % 2 == 0) {
            ++even;
        }
    }

    return even;
}