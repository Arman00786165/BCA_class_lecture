#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // IO //
    // cout << variable | string ;
    // cout << "Krish";         //output|print without next line
    // cout << "Krish" << endl; //output|print with next line
    // cout << "Krish" << "\n"; //output|print with next line (preferred)
    // int a;
    // cin >> a; // taking input
    // cout << a << endl;

    // Operators //

    // Arithmetic
    // cout << 2 + 2 << endl; // + addition
    // cout << 2 - 2 << endl; // - substraction
    // cout << 2 * 2 << endl; // multiplication
    // cout << 2 / 2 << endl; // division
    // cout << 2 % 2 << endl; // modulus

    // Relational
    // cout << (4 < 2) << endl;  // grater then
    // cout << (2 <= 2) << endl; // grater then equals to
    // cout << (4 > 2) << endl;  // less then
    // cout << (2 >= 2) << endl; // less then equals to
    // cout << (2 == 2) << endl; // is equals to
    // cout << (2 != 2) << endl; // is not equals to

    // logical
    // cout << ((4 > 2) && (2 < 3)) << endl; // AND gate all condition needs to be true
    // cout << ((4 > 2) || (2 > 3)) << endl; // OR gate one condition needs to be true
    // cout << !(2<3) << endl; // NOT gate compliment the result

    // Increment //

    // pre-increment
    // int a = 5;
    // int b = ++a;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // post-increment
    // int a = 5;
    // int b = a++;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // Decrement //

    // pre-decrement
    // int a = 5;
    // int b = --a;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // post-decrement
    // int a = 5;
    // int b = a--;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // conditional statement //
    // if-else
    // if (condition){
    //     block of code if condition is true
    // }else
    // {
    //     block of code if condition is false
    // }

    // int a = -0;
    // if (a == 0)
    // {
    //     cout << "Number is zero" << endl;
    // }
    // else if (a > 0)
    // {
    //     cout << "Number is positive" << endl;
    // }
    // else
    // {
    //     cout << "Number is negative" << endl;
    // }

    // Switch case

    // switch (expression)
    // {
    // case value1:
    //     // code to execute if expression == value1
    //     break;
    // case value2:
    //     // code to execute if expression == value2
    //     break;
    // // ...
    // default:
    //     // code to execute if no case matches
    //     break;
    // }

    // Ternary statement

    // condition ? expression if true : expression if false
    // int grater = 4 > 6 ? 4 : 6;
    // cout << grater << endl;

    // Loops //

    // for loop
    // for (initialization; condition; update)
    // {
    //     // code block to be executed
    // }
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i << endl;
    // }

    // While loop
    // initialization;
    // while (condition)
    // {
    //     // code block to be executed
    //     update
    // }
    // int i = 1;
    // while (i <= 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // While loop
    // initialization
    // do
    // {
    /* code  to be executed */
    // update
    // } while (condition);
    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 10);

    // Function //

    // return_type function_name(datatype variable_name, datatype variable_name...){
    //     block of code
    //     return statement
    // }

    // int sum(int a, int b)
    // {
    //     return a + b;
    // }
    // cout << sum(2, 2) << endl;

    // Array
    // datatype array_name[size] = {value_1,value_2,value_3,...};
    // int arr[5] = {12, 34, 45, 67, 78};
    // cout << arr[0] << endl;
    // cout << arr[4] << endl;

    // traversing using normal for loop
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // traversing using normal for each loop(suggested)
    // for (int value : arr)
    // {
    //     cout << value << " ";
    // }
    return 0;
}