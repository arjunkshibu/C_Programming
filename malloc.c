#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    //enter no of integers
    scanf("%d",&n);
    int *p;
    //malloc() returns void pointer hence we typecast to integer pointer
    p = (int *) malloc(n * sizeof(int));
    //scan integers
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    //print integers
    for(int i = 0;i<n;i++){
        printf("%d ",*(p+i));
    }
    //deallocating memory
    free(p);
    return 0;
}