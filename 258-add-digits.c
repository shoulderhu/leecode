// https://brilliant.org/wiki/digital-root/

int addDigits(int num) {
    int remain = num % 9;
    if (remain == 0 && num > 0) {
        return 9;
    }

    return remain;
}

