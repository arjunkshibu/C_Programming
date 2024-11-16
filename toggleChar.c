#include <stdio.h>
#include <ctype.h>

void toggleChar(char *p)
{

    for (int i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) >= 'A' && *(p + i) <= 'Z')
        {
            *(p + i) = tolower(*(p + i));  //*(p + i) = *(p + i) + 32; --> also works

        }
        else if (*(p + i) >= 'a' && *(p + i) <= 'z')
        {
            *(p + i) = toupper(*(p + i)); //*(p + i) = *(p + i) - 32; --> also works
        }

    }
}

int main()
{
    char arr[100];
    printf("Enter the string : ");
    scanf("%[^\n]", arr);
    toggleChar(arr);
    printf("%s", arr);
    return 0;
}