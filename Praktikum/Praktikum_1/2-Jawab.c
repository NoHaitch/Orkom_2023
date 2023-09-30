/*  Nama : Raden Francisco Trianto Bratadiningrat
    NIM : 13522091
    Soal No : 2
*/

#include <stdio.h>

/* ========== Awnser ========== */
int vampire(int x, int y){
    // XNOR
    // XOR but negated
    int a = x & y;
    int b = ~x & ~y;
    return (a|b);
}
/* ============================ */

/* ========== Driver ========== */
int main(){
    int result1 = vampire(0, 0);
    int result2 = vampire(0, 1);
    int result3 = vampire(0xFFFF0000, 0x0000FFFF);
    int result4 = vampire(0x0000000F, 0xFFFFFFF8);

    printf("Result 1: %d 0x%02X\n", result1,result1); // Output: -1 // 0xFFFF_FFFF
    printf("Result 2: %d 0x%02X\n", result2,result2); // Output: -2 // 0xFFFF_FFFE
    printf("Result 3: %d 0x%02X\n", result3,result3); // Output:  0 // 0x0000_0000
    printf("Result 4: %d 0x%02X\n", result4,result4); // Output:  8 // 0b0111
}

/* 
test case 1:
   0            --> 00000000000000000000000000000000
   0            --> 00000000000000000000000000000000
   0xFFFF_FFFF  --> 11111111111111111111111111111111
    
test case 2:
   0            --> 00000000000000000000000000000000
   1            --> 00000000000000000000000000000001
   0xFFFF_FFFE  --> 11111111111111111111111111111110

test case 3:
   0xFFFF0000   --> 11111111111111110000000000000000	
   0x0000FFFF   --> 00000000000000001111111111111111
   0x00000000   --> 00000000000000000000000000000000

test case 4:
    0x0000000F  --> 00000000'00000000'00000000'00001111
    0xFFFFFFF8  --> 11111111'11111111'11111111'11111000
                --> 00000000000000000000000000001000

or -> 1101   and -> 1101    xor -> 1101    xnor -> 1101  
      0100          0100           0100            0100
      1101          0100           1001            0110

    1101     1101 -> 0010    1101 
    0100     0100 -> 1011    0100
    1001      x&y -> 0010    x&y --> 0100

*/