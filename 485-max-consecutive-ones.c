#define MAX(a, b) (a > b ? a : b)

int findMaxConsecutiveOnes(int *nums, int numsSize){
    int consecutive = 0, maximum = 0;

    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == 0) {
            maximum = MAX(maximum, consecutive);
            consecutive = 0;
        } else {
            ++consecutive;
        }
    }

    return MAX(maximum, consecutive);
}