#include <stdio.h>

// use extern to use global variables irrespective of their position in the code
int test(){
    extern int global;
    global = 10;
    printf("%d \n",global);
}

int global;

int main() {
    printf("%d \n",global);
    test();
    return 0;
}