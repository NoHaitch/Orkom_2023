int haikei_doppelganger(int x){
    int c1 = 0xFF & x;
    int c2 = (x >> 8) & 0xFF;
    int c3 = (x >> 16) & 0xFF;
    int c4 = (x >> 24) & 0xFF;

    int ub = ~0x40;
    int ut = ~0x5A;
    int lb = ~0x60;
    int lt = ~0x7A;

    int t1 = ((((c1 + ub) ^ (c1 + ut)) | ((c1 + lb) ^ (c1 + lt))) >> 31) & 1;
    int t2 = ((((c2 + ub) ^ (c2 + ut)) | ((c2 + lb) ^ (c2 + lt))) >> 31) & 1;
    int t3 = ((((c3 + ub) ^ (c3 + ut)) | ((c3 + lb) ^ (c3 + lt))) >> 31) & 1;
    int t4 = ((((c4 + ub) ^ (c4 + ut)) | ((c4 + lb) ^ (c4 + lt))) >> 31) & 1;
    return (t1 & t2 & t3 & t4);
}