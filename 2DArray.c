#include <stdio.h>

int main() {
    
    //int arr[2][3] = {0}; -> Sets all values to zero
    int arr[2][3] = {
                        {1,1,1},
                        {4,5,6}
                    };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}