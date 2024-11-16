#include <stdio.h>

int main()
{
    const double pi = 3.14;
    int arr[] = {1, 2, 3, 4};
    //  pi++; ---> X X X
    //  arr++ ---> X X X
    const int *p;  //read-only cannot modify value at the address but can point to any location.
    //int * const p; //The pointer itself is constant, but the value it points to can be modified.
    p = arr; 
    p++; // we can do this
    return 0;
}