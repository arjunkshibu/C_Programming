#include <stdio.h>


void eightColonyCell(int *p,int n){
    int temp[8];
    for(int days = 0;days<n;days++){
        for(int i=0;i<8;i++){
            if(i==0){
                if(*(p+(i+1))==0){
                    *(temp+i)=0;
                }
                else{
                    *(temp+i)=1;
                }
            }
            else if(i==7){
                if(*(p+(i-1))==0){
                    *(temp+i) = 0;
                }
                else{
                    *(temp+i) = 1;
                }
            }
            else{

            int left = *(p+(i-1));
            int right = *(p+(i+1));

            if(left == right){
                *(temp+i) = 0;
            }
            else{
                *(temp+i) = 1;
            }
            }
        }
        for(int i=0;i<8;i++){
            *(p+i) = *(temp+i);
        }
        int left=0,right=0;
    }

    
    
}

void printarray(int *p){
    for(int i=0;i<8;i++){
        printf("%d ",*(p+i));
    }
}

int main() {
    
    int arr[8] = {0,0,1,0,1,1,0,1};
    eightColonyCell(arr,1);
    printarray(arr);
    

    return 0;
}