#include<iostream>
using namespace std;

class Fraction
{
    int n, d;

public:
    void get()
    {
        cin >> n >> d;
    }

    Fraction add(Fraction f)
    {
        Fraction x;
        x.n = n * f.d + f.n * d;
        x.d = d * f.d;
        return x;
    }

    void display()
    {
        cout << n << "/" << d;
    }
};

int main()
{
    Fraction f1, f2, sum;

    cout << "Enter first fraction: ";
    f1.get();

    cout << "Enter second fraction: ";
    f2.get();

    sum = f1.add(f2);

    cout << "Addition = ";
    sum.display();

    return 0;
}