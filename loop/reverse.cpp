#include <iostream>

using namespace std;

int main () {
    //Reversing number

    int number, reversedNumber=0;//321
    cout << "Number: " ;
    cin >> number;//

    while (number != 0){
        
        reversedNumber *= 10;
        // int lastDigit = number % 10;
        cout << reversedNumber  << " reversedNumber1 result " <<  endl;

        reversedNumber += number % 10;

        cout << reversedNumber << " reversedNumber2 result " << endl;
        
        number /= 10;

        cout << number << " number result" << endl;
    }

    cout << "Reversed: " << reversedNumber;

    system("pause>0");
}