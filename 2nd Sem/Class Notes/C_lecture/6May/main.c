#include <stdio.h>

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int i = 0;
again:
    printf("%d", i);
    i++;
    if (i == 11)
        goto end;

    goto again;
end:;

    return 0;
}
