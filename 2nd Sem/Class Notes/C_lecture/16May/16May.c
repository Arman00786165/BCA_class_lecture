// ##Two Dimension Array

// Syntax of Array

// int main(){
//     int array variable[size][size],i,j;
//     printf("Enter array element:");
//     for(Row size; Tset Condition; ++/--){
//         for(Column size; Test Condition; ++/--){
//             scanf("%d",& array variable[R][C]);
//         }
//     }
//     for(Row size; Test  condition; ++/--){
//         for(column size; Test condition; ++/--){
//             printf("%d",array variable[R][C]);
//         }
//     }

//     return 0;
// }


// Q1. write a program to enter matrix element 2x3 order in an array and display them on output screen?
// #include<stdio.h>
// int main(){

// int a[2][3],i,j ;
// printf("Enter array element: ");
// for(i=0; i<2; i++){
//     for ( j=0; j<3; j++)
//     {
//         scanf("%d",&a[i][j]);
//     }
    
// }
// printf("\n Display matrix is: ");
// for ( i=0; i<2; i++)
// {
//     for ( j=0; j<3; j++)
//     {
//         printf("\n %d",a[i][j]);
//     }
    
// }
// return 0;
// }

//  ##Today Topic is Structure

// #include <stdio.h>
// struct student
// {
//     int roll no;
//     char name[20];
//     char course[20];

//     int marks_obtained;
// };

// int main(){

//     student s1;

//     printf("Enter the student roll Number: ");
//     scanf("%d",&s1.roll no);

//     printf("Enter the student name: ");
//     scanf("%d",&s1.name);
    
//     printf("Enter the student course: ");
//     scanf("%d",&s1.course);
    
//     printf("Enter the student percentage\n: ");
//     scanf("%d",&s1.marks_obtained);
    
//     printf("\n Data entry is complete");
//     printf("\n The entered is as follow:\n");
    
//     printf("\n The student roll no is %d", s1.roll_no);
//     printf("\n The student name is ", s1.name);
//     printf("\n The student course is %s", s1.course);
//     printf("\n The student percentage is %d", s1.marks_obtained);

    
//     return 0;
// }

// #include <stdio.h>

// struct student {
//     int roll_no;
//     char name[20];
//     char course[20];
//     int marks_obtained;
// };

// int main() {
//     struct student s1;

//     printf("Enter the student roll number: ");
//     scanf("%d", &s1.roll_no);

//     printf("Enter the student name: ");
//     scanf("%s", s1.name);

//     printf("Enter the student course: ");
//     scanf("%s", s1.course);

//     printf("Enter the student marks obtained: ");
//     scanf("%d", &s1.marks_obtained);

//     printf("\nData entry is complete");
//     printf("\nThe entered data is as follows:\n");

//     printf("Student Roll No: %d\n", s1.roll_no);
//     printf("Student Name: %s\n", s1.name);
//     printf("Student Course: %s\n", s1.course);
//     printf("Student Marks Obtained: %d\n", s1.marks_obtained);

//     return 0;
// }
// // ## Nested Structure

// #include <stdio.h>

// int main(){
    

//     return 0;
// }



// Q2. write a program to print the address associated with a variable and value stored at that address?

// #include <stdio.h>

// int main(){
//     int qty=6;
//     printf("Address of qty=%d\n",&qty);
//     printf("Value of qty=%d\n",qty);
//     printf("Value of qty=%d\n",(&qty));

//     return 0;
// }

// Q3. write a program below demonstrates the relationship we have discussed so far?


// #include <stdio.h>

// int main(){
//     int qty=6;
//     int *ptr;
//     ptr=&qty;

//     printf("Address of qty=%d\n",&qty);
//     printf("Address of qty=%u\n",ptr);


//     return 0;
// }

