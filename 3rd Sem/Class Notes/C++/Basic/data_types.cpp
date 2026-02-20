#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // syntax
    // data_type variable_name = value;

    char c = 'k';                   // use to store single character
    int i = 98;                     // used to sore integers
    float f = 98.98f;               // use to store floating point numbers
    double d = 999999999.999999999; // used to store long floating point numbers
    bool b = true;                  // use to store boolean value

    // short - use to store short integers(-32,768 to 32,767)
    short s = 3276;

    // unsigned -  use to store only positive value
    unsigned int uI = 98;
    // unsigned int b = -98; // invalid, will provide garbage value

    // long - use to store large integer value (-2,147,483,648 to 2,147,483,647)
    long int lI = 2147483647;

    // long long  use to store large integer value(-92,23,37,20,36,85,47,75,807 to 92,23,37,20,36,85,47,75,807)
    long long int llI = 9223372036854775807;

    unsigned long long int ullI = 18446744073709551615; // largest value can bhe stored in CPP
    return 0;
}