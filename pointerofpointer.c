#include <stdio.h>

int main() {
    
    int* p;
    int** k;
    int num = 10;
    p = &num;
    k = &p;
    **k = 100;
    printf("k is = %d",**k);

    return 0;
}