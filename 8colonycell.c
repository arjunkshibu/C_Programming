#include <stdio.h>


void eightColonyCell(int *p,int n){
    int left,right;
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
            
        }
    }
    
}

int main() {
    
    int arr[8];

    return 0;
}