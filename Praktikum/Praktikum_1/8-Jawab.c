int internet_overdose(int i){
    int temp = 0;
    int t1 = 0xFF << 8;
    int t2 = (0xF << 4) + (0xF << 20);
    int t3 = (0xC << 24) + (0xC << 16) + (0xC << 8) + 0xC;
    int t4 = (0x22 << 24) + (0x22 << 16) + (0x22 << 8) + 0x22;
    
    temp = (i ^ (i >> 8)) & t1;
    i = (temp << 8) ^ temp ^ i;
    temp = (i ^ (i >> 4)) & t2;
    i = (temp << 4) ^ temp ^ i;
    temp = (i ^ (i >> 2)) & t3;
    i = (temp << 2) ^ temp ^ i;
    temp = (i ^ (i >> 1)) & t4;
    i = (temp << 1) ^ temp ^ i;
    
    return i;
}