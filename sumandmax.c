#include <stdio.h>

void result(int a, int b, int c, int *p, int *q){
    *p = a+b+c;
    if(a>b && a>c){
        *q = a;
    }
    else if(b>a && b>c){
        *q = b;
    }
    else{
        *q = c;
    }
}

int main() {
    
    int a = 7;
    int b = 3;
    int c = 9;

    int sum;
    int max;

    result(a,b,c,&sum,&max);

    printf("Sum is %d and max element is %d \n",sum,max);
    return 0;
}