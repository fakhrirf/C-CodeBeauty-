#include <iostream>
using namespace std;

int main()
{
    // +,-,*,/,%

    cout << 5 + 2 << endl;
    cout << 5 / 2 << endl;
    cout << 5 % 2 << endl;

    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;


    int counter2 = 7;
    cout << ++counter2 << endl;
    cout << counter2-- << endl;

    system("cls");

    //<,>,<=, >=,==, !=
    int a = 5 , b = 5;
    cout << (a != b);
    system("cls");

    //&&, ||, !
    // cout << !( a == 5 || b == 5);
    cout << (a == 5 && b == 5 + 3);
    system("cls");

    //=, +=, -=, +=, /=, %=
    int x = 5;
    x += 7;
    // x = x + 7;
    cout << x << endl;
    


    system("pause>0");
}