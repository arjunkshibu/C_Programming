#include <stdio.h>

int main() {
    int x = 300;

    // 00000000 00000000 00000001 00101100
    int *p = &x;
    char *c;
    c = (char *) &x;
    //dereferencing of int pointer
    printf("%d \n",*p);
    //dereferencing of char pointer
    //value is considered as character hence only 1 byte is taken so value is 44 -> (00101100)
    printf("%d \n",*c);
    c++; // c = c + 1, ,moves to next byte 00000001
    printf("%d \n",*c);


    return 0;
}