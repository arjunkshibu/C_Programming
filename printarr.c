#include <stdio.h>


void print(int *p, int num){

    for(int i=0;i<num;i++){
        printf("%d ",*(p+i));
    }

}

int main() {
    int arr[] = {10,20,30,40,50};

    print(arr,5);
    return 0;
}