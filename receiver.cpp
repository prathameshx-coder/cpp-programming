#include <iostream>
using namespace std;

int main()
{
    int n;
    int h[100];

    cout << "Enter length of Hamming code: ";
    cin >> n;

    cout << "Enter received Hamming code: ";

    for (int i = n; i >= 1; i--)
        cin >> h[i];

    int error = 0;

    for (int p = 1; p <= n; p = p * 2)
    {
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i & p)
                count += h[i];
        }

        if (count % 2 != 0)
            error += p;
    }
    if (error == 0)
    {
        cout << "No error detected." << endl;
    }
    else
    {
        cout << "Error detected at position: " << error << endl;

        h[error] = h[error] ^ 1;

        cout << "Corrected Hamming Code: ";

        for (int i = n; i >= 1; i--)
            cout << h[i];

        cout << endl;
    }

    cout << "Original Data Bits: ";

    for (int i = n; i >= 1; i--)
    {
    
        if ((i & (i - 1)) != 0)
            cout << h[i];
    }

    cout << endl;

    return 0;
}