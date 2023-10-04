/*  Nama : Raden Francisco Trianto Bratadiningrat
    NIM : 13522091
    Soal No : 4
*/

#include <stdio.h>

/* ========== Awnser ========== */
int aidoru_shinetai(int a){
    int bit1 = (a >> 3) & 1; // bit at position 1
    int bit4 = (a >> 0) & 1; // bit at position 4

    a = a & (~(1 << 3));
    a = a & (~(1 << 0));  
    a = a | (bit1 << 0);
    a = a | (bit4 << 3);
    return a;
}
/* ============================ */

int main() {
    // Examples
    unsigned int input1 = 0b1000;
    unsigned int output1 = swapBits(input1);
    printf("Input: 0b%04x, Output: 0b%04x\n", input1, output1);

    unsigned int input2 = 0b0001;
    unsigned int output2 = swapBits(input2);
    printf("Input: 0b%04x, Output: 0b%04x\n", input2, output2);

    unsigned int input3 = 0b1010;
    unsigned int output3 = swapBits(input3);
    printf("Input: 0b%04x, Output: 0b%04x\n", input3, output3);

    unsigned int input4 = 0b0101;
    unsigned int output4 = swapBits(input4);
    printf("Input: 0b%04x, Output: 0b%04x\n", input4, output4);

    return 0;
}
/*
test case 1:
   0b1000   --> 00001011'00010000'00000000
   0b0001   --> 00001011'00000000'00000001
                            X            X
test case 2:
   0b0001   --> 00001011'00000000'00000001
   0b1000   --> 00001011'00010000'00000000
                            X            X
test case 3:
   0b1010   --> 00001011'00010000'00010000	
   0b0011   --> 00001011'00000000'00010001
                            X            X
test case 4:
    0b0101  --> 00001011'00000001'00000001
    0b1100  --> 00001011'00010001'00000000
                            X            X

0xFFFFFFF7
0x08
0xFFFFFFFF
*/