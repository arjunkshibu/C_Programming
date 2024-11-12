#include <stdio.h>
#include <string.h>
// char* nameFunction();

int main(void) {

    int a,b;
    char exp;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Enter expression :");
    scanf(" %c",&exp);

    switch(exp) {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("0");
    }
}
