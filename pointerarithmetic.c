#include <stdio.h>

int main() {

    int x = 40;
    int y = 20;

    int * poi = (int*) 10000;

    int * qoi = (int *) 2000;

    int *p;
    int *q;

    p = &x;
    q = &y;

    // lets try
    printf("---->  %d \n",poi-qoi); // 10000 - 2000 = 8000, 8000/4 = 2000.

    printf("---->  %d \n",q-p); // q comes before p in memory hence 1, else -1

    printf("%lu ",p);

    //typically it is p(address) - 1*4(size of int)
    p = p - 1;
    printf("%lu " ,p); //14073748834(5008) 14073748834(5004) [1] + Done

    

    return 0;
}