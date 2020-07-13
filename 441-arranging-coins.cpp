#include <math.h>

/*
int arrangeCoins(int n) {
    return (int)(sqrt(n * 2.0 + 0.25) - 0.5);
}
 */

int arrangeCoins(int n) {
    int root = (int)sqrt(n * 2.0);

    if (root * (root + 1.0) <= n * 2.0) {
        return root;
    }

    return (root - 1);
}