#include <stdio.h>
#include <string.h>

int main()
{
    // ! static initialization
    // char fullName[20] = "Krish Singhaniya";
    // char firstName[6] = {'k', 'r', 'i', 's', 'h', '\0'};

    // ! accessing string using %s(string specifier)

    // printf("%s", fullName);

    // ! accessing usign for loops

    // for (int i = 0; firstName[i] != 6; i++)
    // {
    //     printf("%c", firstName[i]);
    // }
    // int i = 0;

    // ! accessing usign while loops
    // while (firstName[i] != '\0')
    // {
    //     printf("%c", firstName[i]);
    //     i++;
    // }

    // ! dynamic initialization - taking user input for string

    // char name[21];
    // printf("Enter name within 20 characters: ");
    // scanf("%s",name);
    // printf("Hello' %s ", name);

    // ! Find length of a string

    // char name[] = "Krish Singhaniya";
    // int i = 0;
    // int len = 0;
    // while (name[i] != '\0')
    // {
    //     len++;
    //     i++;
    // }
    // printf("Length of a string is %d", len);

    // ! taking user input without with gets()
    // char str[100];
    // printf("Enter a sring\n");
    // gets(str);
    // puts(str);

    // *finding length of a string using strlen()
    // printf("length of a string is : %d", strlen(str));

    // * string copy function

    // char name_1[20], name_2[20];
    // printf("Enter name 1 \n");
    // gets(name_1);

    // ? strcpy(Destination , source);

    // strcpy(name_2 , name_1);
    // printf("Name 1 is: %s" , name_1);
    // printf("Name 2 is: %s" , name_2);

    // * without strcpy() function
    // char str1[17] = "this is a string";
    // char str2[17];
    // int i = 0;
    // while (str1[i] != '\0')
    // {
    //     str2[i] = str1[i];
    //     i++;
    // }
    // str2[i] = '\0';
    // puts(str2);

    // * String reverse
    // char str1[] = "level"

    //* string compare using strcmp()
    // char str1[] = "krish";
    // char str2[] = "krish";

    /*
     *strcmp()
     *return 0 if both are same,
     *return <0 if destination is smaller then source,
     *return >0 if destination is smaller then source
     */

    // if (strcmp(str1, str2) == 0)
    // {
    //     printf("Both are same");
    // }
    // else
    // {
    //     printf("Both are not same");
    // }
    // printf("%d", strcmp("A", "a"));
    // char str1[] = "krish";
    // char str2[] = "arish";
    // for (int i = 0; str1[i] != '\0'; i++)
    // {
    //     if (str1[i] != str2[i])
    //     {
    //         printf("Not name");
    //         break;
    //     }
    //     printf("Same name");
    //     break;
    // }

    // char *name = "krish";
    // printf("%s", name);
    
    // char *name;
    // scanf("%s",name);
    // printf("%s", name);

    return 0;
}
