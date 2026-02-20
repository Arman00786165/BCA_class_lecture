// we use # and typedef in pre-processor
// Types of pre proprocess

#include <stdio.h> // Global decelaration
#include "stdio.h" // local decelaration
#define max 10

int main()
{
    int arr[max];

    for (int i = 0; i < max; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

#include <stdio.h>
#define square(x) ((x) * (x))

int main()
{
    int a = square(2);
    printf("%d", a);

    return 0;
}
