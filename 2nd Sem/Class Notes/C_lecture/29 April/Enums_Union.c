#include <stdio.h>

union name
{
    int a;
    int b;
    int c;
};

enum days
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
};

int main()
{
    union name u1;
    u1.a = 7;
    // printf("%d", u1.a);

    u1.c = 5;
    // printf("%d", u1.b);

    u1.c = 2;
    // printf("%d", u1.c);

    enum days wd = mon;
    printf("%d", wd);

    return 0;
}
