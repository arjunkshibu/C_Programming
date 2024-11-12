#include <stdio.h>

int main() {
    int *p;
    float *q;
    double *r;

    printf("%lu bytes %lu bytes %lu bytes \n",sizeof(p),sizeof(q),sizeof(r));
    //dereferencing
    printf("%lu bytes %lu bytes %lu bytes \n",sizeof(*p),sizeof(*q),sizeof(*r));

    return 0;
}