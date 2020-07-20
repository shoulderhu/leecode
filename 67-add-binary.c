char *addBinary(char *a, char *b) {
    int aLen = strlen(a), bLen = strlen(b);
    int i, j, carry = 0;
    char *c;

    if (bLen > aLen) {
        c = a;
        a = b;
        b = c;
    }

    aLen = strlen(a);
    bLen = strlen(b);
    for (i = aLen - 1, j = bLen - 1; j >= 0; --i, --j) {
        if ((a[i] - '0') + (b[j] - '0') + carry >= 2) {
            a[i] = (a[i] - '0') + (b[j] - '0') + carry - 2 + '0';
            carry = 1;
        } else {
            a[i] = (a[i] - '0') + (b[j] - '0') + carry + '0';
            carry = 0;
        }
    }

    while (carry == 1 && i >= 0) {
        if ((a[i] - '0') + carry >= 2) {
            a[i] = (a[i] - '0') + carry - 2 + '0';
            carry = 1;
        } else {
            a[i] = (a[i] - '0') + carry + '0';
            carry = 0;
            break;
        }
        --i;
    }

    if (carry == 1) {
        c = (char *)malloc((aLen + 2) * sizeof(char));
        c[0] = '1';
        strcpy(c + 1, a);
        return c;
    } else {
        return a;
    }
}