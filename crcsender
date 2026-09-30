#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, generator;

    cout << "Enter data bits: ";
    cin >> data;

    cout << "Enter generator bits (Diviser):  ";
    cin >> generator;

    int generatorLength = generator.length();

    string zeroAppended = data;

    for (int i = 0; i < generatorLength - 1; i++)
    {
        zeroAppended += '0';
    }

    string temp = zeroAppended;

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

    string codeword = data + remainder;

    cout << "\n----- CRC Sender Side -----" << endl;
    cout << "Data bits        : " << data << endl;
    cout << "Generator bits (Diviser): " << generator << endl;
    cout << "Zero appended  (D-1) : " << zeroAppended << endl;
    cout << "Redundancy bits  : " << remainder << endl;
    cout << "Codeword         : " << codeword << endl;

    return 0;
}
