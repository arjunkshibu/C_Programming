#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4};
    int *p,x;
    p = arr;

    printf("%p \n",(void *)p); // base address of the array

    printf("%p \n",&p); // address of pointer itself
    x = *p++;
    // printf("x=%d \n",(*p++));
    printf("x=%d \n",(x));

    return 0;
}