// TODO Define two string using pointer and concatenate without string function
#include <stdio.h>

int main()
{

    return 0;
}

// TODO Store 5 record of employee id, age and show record using structure pointer
// #include <stdio.h>

// struct Employee
// {
//     int age;
//     int Id;
// } emp[5];

// int main()
// {
//     struct Employee *ptr_emp;
//     ptr_emp = emp;

//     emp[0].Id = 1;
//     emp[0].age = 12;

//     emp[1].Id = 2;
//     emp[1].age = 12;

//     emp[2].Id = 3;
//     emp[2].age = 12;

//     emp[3].Id = 4;
//     emp[3].age = 12;

//     emp[4].Id = 5;
//     emp[4].age = 12;

//     for (int i = 0; i < 5; i++)
//     {
//         printf("id %d \n", ptr_emp->Id);
//         printf("age %d \n", ptr_emp->age);\
//         ptr_emp++;
//     }

//     return 0;
// }

// TODO Define a structure student, store name and 5 student marks and total and average marks
// #include <stdio.h>

// struct student
// {
//     char *name;
//     int marks[5];
// } s1, s2, s3, s4, s5;

// // Average Marks
// int avgMarks(int arr[])
// {
//     int avg = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         avg += arr[i];
//     }
//     return avg / 5;
// }

// int main()
// {
//     s1.name = "krish";
//     for (int i = 0; i < 5; i++)
//         s1.marks[i] = 90;

//     s2.name = "Arman";
//     for (int i = 0; i < 5; i++)
//         s2.marks[i] = 95;

//     s3.name = "Junaid";
//     for (int i = 0; i < 5; i++)
//         s3.marks[i] = 80;

//     s4.name = "Dalip";
//     for (int i = 0; i < 5; i++)
//         s4.marks[i] = 85;

//     s5.name = "Shubam";
//     for (int i = 0; i < 5; i++)
//         s5.marks[i] = 75;

//     // Average Marks
//     printf("Average marks for %s: %d\n", s1.name, avgMarks(s1.marks));
//     printf("Average marks for %s: %d\n", s2.name, avgMarks(s2.marks));
//     printf("Average marks for %s: %d\n", s3.name, avgMarks(s3.marks));
//     printf("Average marks for %s: %d\n", s4.name, avgMarks(s4.marks));
//     printf("Average marks for %s: %d\n", s5.name, avgMarks(s5.marks));
//     return 0;
// }

// TODO Take input string pointer and check it is palindrome or not
// #include <stdio.h>

// int main()
// {
//     char *str1 = "level";
//     char *str2 = "levql";
//     int diffCount = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (str1[i] != str2[i])
//         {
//             diffCount++;
//         }
//     }
//     if (diffCount > 0)
//     {
//         printf("not palindrome");
//     }
//     else
//     {
//         printf("Is palindrome");
//     }

//     return 0;
// }
