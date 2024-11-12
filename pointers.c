#include <stdio.h>

int main() {
    
    int num = 10;
    int* pointer,something;

    printf("something : %d\n",something);

    pointer = &num;

    printf("%x",pointer); 
    *pointer = 20; //dereferencing --> ie. value present at the address stored in pointer

    return 0;
}