#include <stdio.h>

int main()
{
    int a = 21;                // Declare an integer 'a' and assign it the value 21
    int* pointer = &a;         // Declare a pointer 'pointer' and assign it the address of 'a'
        
    printf("%p \n",pointer);     

    printf("size of 6 is %d",sizeof(6));

    return 0;                  // Return 0 to indicate successful execution
}
