/*  Nama : Raden Francisco Trianto Bratadiningrat
    NIM : 13522091
    Soal No : 6
*/

#include <stdio.h>

/* ========== Awnser ========== */
int ghost_rule(int n){
    // if n is power of 2
    int min1 = n + (~1 + 1); // n-1
    int powOf2 = (n & min1);  // get if power of 2 then = 0000
    int res = ~((powOf2 | (~powOf2 + 1)) >> 31) & 1;
    // Do ! on powOf2 so that when n is power of 2, res = 1 else 0
    // If n is 0 than if0 = 0 else if0 = ~0
    int if0 = (n^ (~n+1) & (~n+1)) >> 31;
    return if0 & res;
}
/* ============================ */

int main(){
    int n1 = -1;
    int n2 = 0;
    int n3 = 2;
    int n4 = -2;
    int n5 = 32;
    int result1 = ghost_rule(n1);
    int result2 = ghost_rule(n2);
    int result3 = ghost_rule(n3);
    int result4 = ghost_rule(n4);
    int result5 = ghost_rule(n5);

    printf("Test input: %d -> %d\n",n1,result1);
    printf("Test input: %d -> %d\n",n2,result2);
    printf("Test input: %d -> %d\n",n3,result3);
    printf("Test input: %d -> %d\n",n4,result4);
    printf("Test input: %d -> %d\n",n5,result5);
}