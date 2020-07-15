int thirdMax(int *nums, int numsSize) {
    long first = -2147483649, second = -2147483649, third = -2147483649;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] > first) {
            third = second;
            second = first;
            first = nums[i];
        } else if (nums[i] == first) {
            continue;
        } else if (nums[i] > second) {
            third = second;
            second = nums[i];
        } else if (nums[i] == second) {
            continue;
        } else if (nums[i] > third) {
            third = nums[i];
        }
    }

    if (third == -2147483649) {
        return (int)first;
    } else {
        return (int)third;
    }
}