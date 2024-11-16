#include <stdio.h>

#define MAX 30

void split(char *p, char *f, char *s){
    int i=0;
    while(*(p+i) != '*'){
        *(f+i) = *(p+i);
        i++;
    }
    *(f+i) = '\0';
    i++;
    int j=0;
    while(*(p+i) != '\0'){
        *(s+j) = *(p+i);
        i++;
        j++;
    }
    *(s+i) = '\0';

}

int main() {
    char arr[] = "Hello*World";
    char first[MAX];
    char second[MAX];

    split(arr,first,second);
    printf("%s\n",first);
    printf("%s\n",second);


    return 0;
}