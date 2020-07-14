#include <string.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
    int *tmp = (int *)malloc(nums1Size * sizeof(int));
    int idx = 0, idx1 = 0, idx2 = 0, remain = m;
    memcpy(tmp, nums1, nums1Size * sizeof(int));

    while (idx2 < n) {
        if (idx1 != m && tmp[idx1] < nums2[idx2]) {
            nums1[idx++] = tmp[idx1++];
            --remain;
        } else {
            nums1[idx++] = nums2[idx2++];
        }
    }

    memcpy(nums1 + idx, tmp + idx1, remain * sizeof(int));
}