#include <iostream>
using namespace std;

void add(int a, int b, int c, int d)
{
    cout << "Sum = " << a + c << " + " << b + d << "i" << endl;
}

void sub(int a, int b, int c, int d)
{
    cout << "Subtraction = " << a - c << " + " << b - d << "i";
}

int main()
{
    int a, b, c, d;

    cout << "Enter first complex number: ";
    cin >> a >> b;

    cout << "Enter second complex number: ";
    cin >> c >> d;

    add(a, b, c, d);
    sub(a, b, c, d);

    return 0;
}