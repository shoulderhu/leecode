/*int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize) {
    int *ret = (int *)malloc(numsSize * sizeof(int));
    int tmp;

    for (int i = 0; i < numsSize; ++i) {
        while (nums[i] != nums[nums[i] - 1]) {
            tmp = nums[nums[i] - 1];
            nums[nums[i] - 1] = nums[i];
            nums[i] = tmp;
        }
    }

    *returnSize = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] != i + 1) {
            ret[(*returnSize)++] = i + 1;
        }
    }

    return ret;
}*/

#include <stdlib.h>

int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize) {
    int *ret = (int *)malloc(numsSize * sizeof(int));
    int tmp;

    for (int i = 0; i < numsSize; ++i) {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] > 0) {
            nums[idx] = nums[idx] * -1;
        }
    }

    *returnSize = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] > 0) {
            ret[(*returnSize)++] = i + 1;
        }
    }

    return ret;
}