#include <stdio.h>
#include <stdlib.h>

struct student
{
    char *name;
    int roll;
    int marks;
} *ptr_student;

int main()
{

    // Memory allocation

    // malloc - use to allocate memory runtime
    int *ptrInt = (int *)malloc(sizeof(int));
    float *ptrFloat = (float *)malloc(sizeof(float));

    *ptrInt = 234;
    printf("%d", *ptrInt);

    *ptrFloat = 234.234;
    printf("%f", *ptrFloat);

    free(ptrInt);
    free(ptrFloat);

    // Structure pointer
    ptr_student = (struct student *)malloc(sizeof(struct student));
    ptr_student->name = "krish";
    ptr_student->marks = 90;
    ptr_student->roll = 12;

    printf("Name:%s \nRoll: %d \nMarks: %d", ptr_student->name, ptr_student->roll, ptr_student->marks);

    free(ptr_student);

    // calloc - use to allocate continues memory runtime
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));
    ptr[0] = 10;
    ptr[10] = 100;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[10]);

    free(ptr);

    // realloc - use to reallocate less or more memory to a pointer
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));
    ptr[0] = 10;
    ptr[10] = 100;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[10]);

    realloc(ptr, sizeof(int) * 12);
    ptr[12] = 120;

    printf("%d\n", ptr[12]);

    return 0;
}