/*  Nama : Raden Francisco Trianto Bratadiningrat
    NIM : 13522091
    Soal No : 4
*/

#include <stdio.h>

/* ========== Awnser ========== */
unsigned int aidoru_shinetai(unsigned int a){
    int bit1 = (a >> 1) & 1; // bit at position 1
    int bit4 = (a >> 4) & 1; // bit at position 4

    // Clear bits at positions 1 and 4, making bit at 1 and 4, into 0
    a = a & (~(1 << 1)) & (~(1 << 4));

    // Set bits at positions 1 and 4 with swapped values
    a = a | (bit1 << 4) | (bit4 << 1);
    return a;
}
/* ============================ */

/* ========== Driver ========== */
unsigned int swapBits(unsigned int num) {
    // Extract bits at positions 1 and 4
    unsigned int bit1 = (num >> 1) & 1;
    unsigned int bit4 = (num >> 4) & 1;

    // Clear bits at positions 1 and 4
    num &= ~(1 << 1);
    num &= ~(1 << 4);

    // Set bits at positions 1 and 4 with the swapped values
    num |= (bit1 << 4);
    num |= (bit4 << 1);

    return num;
}

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