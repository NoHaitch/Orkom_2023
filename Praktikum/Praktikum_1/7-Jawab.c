/*  Nama : Raden Francisco Trianto Bratadiningrat
    NIM : 13522091
    Soal No : 7
*/

#include <stdio.h>

/* ========== Awnser ========== */
int hibana(int a, int b, int c){
    int ab = a + (~b + 1); // a - b
    int maxab = a + (~(ab & ( ab >> 31)) + 1);
    int abc = maxab + (~c + 1); // maxab - c
    int maxabc = maxab + (~(abc & (abc >> 31)) + 1);
    return maxabc;
}
/* ============================ */

int main(){
    int a1 = 1;
    int b1 = -1;
    int c1 = 5;
    int a2 = -1;
    int b2 = -5;
    int c2 = -2;

    int result1 = hibana(a1,b1,c1);
    int result2 = hibana(a2,b2,c2);

    printf("Test input: %d %d %d -> %d\n",a1,b1,c1,result1);
    printf("Test input: %d %d %d -> %d\n",a2,b2,c2,result2);
}

