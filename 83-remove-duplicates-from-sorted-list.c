int removeDuplicates(int *nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int idx = 0;
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] != nums[idx]) {
            nums[++idx] = nums[i];
        }
    }

    return (idx + 1);
}