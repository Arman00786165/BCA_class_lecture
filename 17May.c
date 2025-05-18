// // Q1.write a program to compute All prime numbers between 100 to 500?

// #include <stdio.h>

// int main() {
//     int i, j, n;

//     printf("Prime numbers between 100 and 500 are:\n");

//     for (i = 100; i <= 500; i++) {
//         n = 0;

//         for (j = 1; j <= i; j++) {
//             if (i % j == 0) {
//                n++;
//             }
//         }

//         if (n == 2) {
//             printf("\n%d", i);
//         }
//     }

//     printf("\n");
//     return 0;
// }



// // Q2.write a program to display all Armstrong numbers between 100  to 1000?
// // Q3.write a program to create a 3x3 matrix and store the first nine natural numbers row wise?

// // #include <stdio.h>

// int main(){
//     int a[3][3],i,j;

//     printf("Enter value: ");

//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
            
//         }
        
//     }
    
//     printf("\n Display matrix is ");

//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             printf("\n%d",a[i][j]);
//         }
        
//     }
    

//     return 0;
// }

// Q4.WAP to print any 10 number and print the maximum and minimum?
// #include <stdio.h>

// int main() {
//     int num[10], i, max, min;

//     for(i = 0; i < 10; i++) {
//         scanf("%d", &num[i]);
//     }

//     max = min = num[0];

//     for(i = 1; i < 10; i++) {
//         if(num[i] > max) max = num[i];
//         if(num[i] < min) min = num[i];
//     }

//     printf("%d\n%d", max, min);

//     return 0;
// }

#include <stdio.h>

int main() {
    int i, arr[10]={23,54,65,25,54,45,98,12,99,3};
    int max = arr[0];
    int min = arr[0];

    for ( i = 0; i < 10; i++)
    {
        if(max< arr[i]){
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
        
        printf("max:%d\n",max);
        printf("min:%d\n",min);
        
    }
    

    return 0;
}





// Q5.WAP to print a number and print its even factor?