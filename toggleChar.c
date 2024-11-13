#include <stdio.h>
#include <ctype.h>

void toggleChar(char *p){

    for(int i=0;*(p+i)!='\0';i++){
        *(p+i) = toupper(*(p+i));
    }

}

int main() {
    char arr[100];
    printf("Enter the string : ");
    scanf("%[^\n]",arr);
    toggleChar(arr);
    printf("%s",arr);
    return 0;
}