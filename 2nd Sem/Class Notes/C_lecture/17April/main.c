#include <stdio.h>

void add();
void sub();
void mul();
void Div();

void main()
{
    int user;
    printf("1) add\n");
    printf("2) sub\n");
    printf("3) mul\n");
    printf("4) div\n");
    scanf("%d", &user);

    switch (user)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        Div();
        break;

    default:
        break;
    }
}

void add()
{
    int a, b, c;
    printf("\nEnter a no: ");
    scanf("%d", &a);
    printf("\nEnter a no: ");
    scanf("%d", &b);
    c = a + b;
    printf("\nAdd is: %d", c);
}
void mul()
{
    int a, b, c;
    printf("\nEnter a no: ");
    scanf("%d", &a);
    printf("\nEnter a no: ");
    scanf("%d", &b);
    c = a * b;
    printf("\nAdd is: %d", c);
}

void sub()
{
    int a, b, c;
    printf("\nEnter a no:  ");
    scanf("%d", &a);
    printf("\nEnter a no: ");
    scanf("%d", &b);
    c = a - b;
    printf("\nSub is: %d", c);
}

void Div()
{
    int a, b, c;
    printf("\nEnter a no:  ");
    scanf("%d", &a);
    printf("\nEnter a no: ");
    scanf("%d", &b);
    c = a / b;
    printf("\nDiv is: %d", c);
}

// #include <stdio.h>

// int factorial(int n)
// {

//   if (n == 0 || n == 1)
//     return 1;
//   else
//     return n * factorial(n - 1);
// }

// int main()
// {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   int result = factorial(num);
//   printf("The factorial of %d is: %d\n", num, result);
//   return 0;
// }

// #include <stdio.h>

// int main()
// {

//   int day;
//   printf("Enter a number (1-7) day of the week: ");
//   scanf("%d", &day);

//   switch (day)
//   {
//   case 1:
//     printf("Monday\n");
//     break;
//   case 2:
//     printf("Tuesday\n");
//     break;
//   case 3:
//     printf("wednesday\n");
//     break;
//   case 4:
//     printf("Thursday\n");
//     break;
//   case 5:
//     printf("Friday\n");
//     break;
//   case 6:
//     printf("Saturday\n");
//     break;
//   case 7:
//     printf("Sunday\n");
//     break;
//   default:
//     printf(" This is not valid");
//     break;
//   }

//   return 0;
// }