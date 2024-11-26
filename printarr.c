#include <stdio.h>


void print(int *p, int num){

    for(int i=0;i<num;i++){
        printf("%d ",*(p+i));
    }

}

int main() {
    int arr[5];

    for(int i=0;i<5;i++){
        scanf("%d",arr+i);
    }

    print(arr,5);
    return 0;
}