unsigned calilburne_story_of_the_legendary_sword(unsigned x){
    int temp = x & 0x7F;
    int test = !(!temp);
    temp = (temp + temp + temp + temp + temp) >> 7;
    x = x >> 7;
    x = x + x + x + x + x;
    return x + temp + test;
}