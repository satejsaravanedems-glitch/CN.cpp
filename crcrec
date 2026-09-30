#include <iostream>
#include <string>
using namespace std;

int main()
{
    string codeword, generator;

    cout << "Enter received codeword: ";
    cin >> codeword;

    cout << "Enter generator bits: (Divisor) ";
    cin >> generator;

    int generatorLength = generator.length();

    string temp = codeword;

    
    for (int i = 0; i <= temp.length() - generatorLength; i++)
    {
        if (temp[i] == '1')
        {
            for (int j = 0; j < generatorLength; j++)
            {
                if (temp[i + j] == generator[j])
                    temp[i + j] = '0';
                else
                    temp[i + j] = '1';
            }
        }
    }

    string remainder = temp.substr(
        temp.length() - (generatorLength - 1)
    );

    bool error = false;

    for (char bit : remainder)
    {
        if (bit == '1')
        {
            error = true;
            break;
        }
    }

    cout << "\n----- CRC Receiver Side -----" << endl;
    cout << "Received Codeword : " << codeword << endl;
    cout << "Generator Bits (Diviser) : " << generator << endl;
    cout << "CRC Remainder     : " << remainder << endl;

    if (error)
    {
        cout << "Error Present     : YES" << endl;
        cout << "Error is present." << endl;
    }
    else
    {
        cout << "Error Present     : NO" << endl;
        cout << "No error is present." << endl;
    }

    return 0;
}
