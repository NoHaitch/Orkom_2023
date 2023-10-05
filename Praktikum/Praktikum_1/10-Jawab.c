int hatsune_miku_no_gekishou(int x, int y) {
    int min = (1 << 31);
    int max = ~min;
    int sum = x + y;
    int lastx = x >> 31;
    int lasty = y >> 31;
    int overflow = ((lastx ^ sum) & (lasty ^ sum)) >> 31;
    int tots = (~lastx & max) | (lastx & min);
    retrun (overflow & tots) | (~overflow & sum);
}