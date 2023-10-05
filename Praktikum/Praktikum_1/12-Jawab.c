int oshama_scramble(unsigned uf){
    int sign = (uf >> 31) & 1;
    int exp = (uf >> 23) & 0xFF;
    int e = exp - 0x7F;
    int temp;
    int sum;
    int minus;

    if(e > 30){
        sum = 1 << 31;
    } else{
        if(e < 0){
            sum = 0;
        } else{
            temp = (1 << (e + 1)) - 1;
            minus = 23 - e;
            if(minus > 0){
                sum = (uf >> minus) & temp;
            } else{
                sum = (uf << (~minus)) & temp;
            }
        }
    }
    return sum;
}