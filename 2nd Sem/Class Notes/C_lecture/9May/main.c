#include <stdio.h>

int main()
{
    // file handling

    //* Writing into file

    FILE *f = fopen("temp.txt", "w");

    fputs("nikamma arman\n", f);
    fprintf(f, "krish op\n");

    fclose(f);

    //* Reading from file

    FILE *r = fopen("temp.txt", "r");

    char text[100];
    while (fgets(text, 100, r) != NULL)
    {
        printf("%s", text);
    }

    fclose(r);

    return 0;
}