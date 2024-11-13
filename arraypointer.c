#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    printf("%d \n",1[arr]); // gets converted to *(1+arr) = *(base address + 4 bytes->(1*4))

    int *p = arr; // no need of &, because arr contains base address or we can use &arr[0];

    printf("%d \n",*(arr+3));  //base address + 4 bytes
    printf("%d \n",*(p+2)); //base address + 4 bytes, since p points to base address of arr 
    return 0;
}