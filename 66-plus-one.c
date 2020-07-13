#include <string.h>

int *plusOne(int *digits, int digitsSize, int *returnSize) {
    int *ret, carry = 1;

    for (int i = digitsSize - 1; i >= 0; --i) {
        if (*(digits + i) + carry == 10) {
            *(digits + i) = 0;
            carry = 1;
        } else {
            *(digits + i) = *(digits + i) + carry;
            carry = 0;
            break;
        }
    }

    if (carry == 0) {
        ret = (int *)malloc(digitsSize * sizeof(int));
        *returnSize = digitsSize;
        memcpy(ret, digits, digitsSize * sizeof(int));
    } else {
        ret = (int *)malloc((digitsSize + 1) * sizeof(int));
        *returnSize = digitsSize + 1;
        memcpy(ret + 1, digits, digitsSize * sizeof(int));
        *ret = 1;
    }

    return ret;
}