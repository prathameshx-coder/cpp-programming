#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int count = 0;

    cout << "Enter stuffed bits: ";
    cin >> input;

    cout << "Destuffed: ";

    for (int i = 0; i < input.length(); i++)
    {
        char c = input[i];

        cout << c;

        if (c == '1')
        {
            count++;

            if (count == 5)
            {
                i++;          // Skip the stuffed 0
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }

    return 0;
}