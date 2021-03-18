#include <iostream>
using namespace std;

int main() 
{
    float a, b, c;
    cout << "a, b, c: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "Equilateral Triangle";
    }
    else 
    {
        if(a!=b && a != c && b != c )
            cout << "Scalene Triangle";
        else
            cout << "Isosceles triangle";
    }

    system("pause > 0");
}