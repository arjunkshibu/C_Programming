#include <stdio.h>
#include <string.h>

int main() {
    
    char arr[] = {'A','r','j','u','n','\0'};
    char new[6] = "hello";
    char testArray[5];

    // for(int i=0;i<4;i++){
    //     scanf("%c",&testArray[i]);
    // }
    char stringArray[6];
    char getsArray[6];
    scanf(" %s",stringArray); // use \n to consume the newline character.
    //char c = getchar(); use getchar to consume newline

    printf("%s \n",stringArray);
   
    fgets(getsArray,6,stdin);
    printf(" %s",getsArray);

    char name[] = "Rahul";
    puts(name);

    //*** stack smashing detected ***: terminated if we give arr[5] = "arjun", 
    //null character requires space

    char arr2[5];

    //char arr2[] = arr; -> XXXXXXX
    // ALWAYS make sure \0 is present in original array before copying


    strcpy(arr2,arr);

    //printf("printing %s",new);






    return 0;
}