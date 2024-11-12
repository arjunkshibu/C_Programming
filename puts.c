#include <stdio.h>

int main() {
    char name[] = "Jayanti";
    printf("%.5s",name);
    printf("%10.5s \n",name);
    printf("%s\n",&name[2]);

    puts(name);
    return 0;
}