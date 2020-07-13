int hammingDistance(int x, int y){
    int distance = 0;

    for (int i = 0; i < 31; ++i) {
        if ((x >> i & 1) != (y >> i & 1)) {
            ++distance;
        }
    }

    return distance;
}