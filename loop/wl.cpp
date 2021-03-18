#include <iostream>
using namespace std;

int main()
{
    // Count digits of a number
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0)
        cout << "You have entered 0.\n";
    else {
        if(number < 0)
            number = -1 * number;

        int counter = 0;
        while(number > 0){ //0
            // number= number / 10;
            number /= 10;
            cout << number << endl;
            counter++;//3
        }

        cout << "Number contains " << counter << " digits\n";
    }


    system("pause>0");
}