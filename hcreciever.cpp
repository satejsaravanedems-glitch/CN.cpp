#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter total number of bits in received Hamming code: ";
    cin >> n;

    int h[100];

    cout << "Enter received Hamming code: ";

    string code;
    cin >> code;

    if (code.length() != n)
    {
        cout << "Please enter exactly " << n << " bits." << endl;
        return 0;
    }

    
    for (int i = 1; i <= n; i++)
    {
        h[i] = code[n - i] - '0';
    }


    int errorPosition = 0;

    for (int p = 1; p <= n; p = p * 2)
    {
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i & p)
                count += h[i];
        }

        if (count % 2 != 0)
            errorPosition += p;
    }


    if (errorPosition == 0)
    {
        cout << "\nNo error detected." << endl;
    }
    else
    {
        cout << "\nError detected at position: "
             << errorPosition << endl;

        
        h[errorPosition] = h[errorPosition] ^ 1;

        cout << "Error corrected." << endl;
    }


    cout << "Corrected Hamming Code: ";

    for (int i = n; i >= 1; i--)
        cout << h[i];

    cout << endl;


    cout << "Data bits: ";

    for (int i = n; i >= 1; i--)
    {
        
        if ((i & (i - 1)) != 0)
            cout << h[i];
    }

    cout << endl;

    return 0;
}