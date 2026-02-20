#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[20];
    int rollNumber;
    float marks;
} student;

struct employee
{
    int id;
    int age;
} emp[2], *ep, e1;

int main()
{
    // ! initializing and printing array
    struct student s1;
    s1.rollNumber = 14;
    s1.marks = 98;
    printf("Roll number %d\nMarks %0.2f", s1.rollNumber, s1.marks);

    student s1 = {"krish", 1, 97.96};
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.rollNumber);
    printf("Marks: %0.2f\n", s1.marks);

    // ! Array of structure
    emp[0].id = 1;
    emp[0].age = 12;

    emp[1].id = 32;
    emp[1].age = 23;

    emp[2].id = 43;
    emp[2].age = 34;
    // ! taking user input for array of structure
    for (int i = 0; i < 2; i++)
    {
        printf("Enter emp %d Id: ", i + 1, emp[i].id);
        scanf("%d", &emp[i].id);

        printf("Enter emp %d Age: ", i + 1, emp[i].age);
        scanf("%d", &emp[i].age);
    }
    printf("\n\n");
    for (int i = 0; i < 2; i++)
    {
        printf(" emp Id %d\n", emp[i].id);

        printf(" emp Age %d\n", emp[i].age);
    }

    // ! pointer with structure
    ep = &e1;
    ep->id = 1;
    scanf("%d", &ep->age);
    printf(" emp id %d\n", ep->id);
    printf(" emp Age %d\n", ep->age);

    return 0;
}