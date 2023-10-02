/*  Nama : Raden Francisco Trianto Bratadiningrat
    NIM : 13522091
    Soal No : 5
*/

#include <stdio.h>

/* ========== Awnser ========== */
int bitter_choco_decoration(int x){
    // 23 -> 00010111
    // 23 -> 16 + 4 + 2 + 1
    // 23 -> 2^4 + 2^2 + 2^1 + 2
    // 23*x -> 16x + 4x + 2x + x
    return (x << 4) + (x << 2) + (x << 1) + x;
}
/* ==========================   == */

/* ========== Driver ========== */
int main(){
    int result1 = bitter_choco_decoration(1);
    int result2 = bitter_choco_decoration(23);
    int result3 = bitter_choco_decoration(-69);

    printf("Result 1: %d 0x%02X\n", result1,result1); // Output: 23 // 0xFFFF_FFFF
    printf("Result 2: %d 0x%02X\n", result2,result2); // Output: 529 // 0xFFFF_FFFE
    printf("Result 3: %d 0x%02X\n", result3,result3); // Output:  -1587 // 0x0000_0000
}

/* 
test case 1:
    1    --> 00000000000000000000000000000000
    23   --> 00000000000000000000000000010111
    
test case 2:
    23   --> 00000000000000000000000000000000
    529  --> 00000000000000000000000000101110

test case 3:
   -69   --> 11111111111111110000000000000000	
   -1587 --> 00000000000000001111111111111111
*/