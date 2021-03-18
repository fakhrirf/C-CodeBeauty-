#include <iostream>
#include <climits>


using namespace std;

int main()
{
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrad = 4.5;
    double balance = 45678945856;

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    //-1,-2,-3,..,-2147483648
    cout << "Int min value is " << INT_MIN << endl;
    // -1, +2,, +3, ..., +2147483647
    cout << "Int max value is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";

    cout << "UInt max value is " << UINT_MAX << endl;
    

    system("pause>0");
} 