bool judgeCircle(char *moves) {
    int x = 0, y = 0;
    for (int i = 0; i < strlen(moves); ++i) {
        switch (moves[i]) {
            case 'R':
                ++y;
                break;
            case 'L':
                --y;
                break;
            case 'U':
                --x;
                break;
            case 'D':
                ++x;
                break;
        }
    }

    return x == 0 && y == 0;
}