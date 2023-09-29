/*  Nama : Raden Francisco Trianto Bratadiningrat
    NIM : 13522091
    Soal No : 1
*/

#include <stdio.h>

/* ========== Awnser ========== */
int sharuru(int x, int y){
    /* where: front -> 10101010 <- back*/
    /* take 4 bit from the back of x */
    /* take 4 bit from the front of y */
    
    /* 0x0F = 00001111 */
    x = x & 0x0F;  
    // make so that the front 4 bit is 0
    
    /* 0xF0 = 11110000 */
    y = y & 0xF0; 
    // make so that the back 4 bit is 0
    return (x | y);
}
/* ============================ */

/* ========== Driver ========== */
int main(){
    int result1 = sharuru(0xFF, 0x00);
    int result2 = sharuru(0x00, 0xFF);
    int result3 = sharuru(0x12, 0xAB);
    int result4 = sharuru(0xF0, 0x12);

    printf("Result 1: 0x%02X\n", result1); // Output: 0x0F
    printf("Result 2: 0x%02X\n", result2); // Output: 0xF0
    printf("Result 3: 0x%02X\n", result3); // Output: 0xA2
    printf("Result 4: 0x%02X\n", result4); // Output: 0x10
}