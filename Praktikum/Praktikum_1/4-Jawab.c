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
int main(){
    int result1 = aidoru_shinetai(0b1000);
    int result2 = aidoru_shinetai(0b0001);
    int result3 = aidoru_shinetai(0b1010);
    int result4 = aidoru_shinetai(0b0101);

    printf("Result 1: %d 0x%02X\n", result1,result1); // Output:  720897 // 0b0001
    printf("Result 2: %d 0x%02X\n", result2,result2); // Output:  724992 // 0b1000
    printf("Result 3: %d 0x%02X\n", result3,result3); // Output:  720913 // 0b0011
    printf("Result 4: %d 0x%02X\n", result4,result4); // Output:  725248 // 0b1100
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