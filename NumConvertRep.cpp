#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

// Function to check input string validity for the specified base
bool isValid(const string& input, int base)
{
    for (char ch : input)
    {
        ch = toupper(static_cast <unsigned char> (ch));
        int digit;

        if (ch >= '0' && ch <= '9') digit = ch - '0';
        else if (ch >= 'A' && ch <= 'Z') digit = ch - 'A' + 10;
        else return false;

        if (digit >= base) return false;
    }

    return true;
}

// Function to convert any base (2 - 36) to Decimal
unsigned long long toDecimal(const string& input, int base)
{
    unsigned long long decimal = 0;
    unsigned long long power = 1;

    for (int i = static_cast <int> (input.length()) - 1; i >= 0; i--)
    {
        char ch = toupper(static_cast <unsigned char> (input[i]));
        int value = (ch <= '9') ? (ch - '0') : (ch - 'A' + 10);

        decimal += value * power;
        power *= base;
    }

    return decimal;
}

// Function to convert Decimal to target base (2 - 36)
void fromDecimal(unsigned long long decimal, int base)
{
    const string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result;

    if (decimal == 0)
    {
        cout << ("\n\n---- RESULT ----\n0\n----------------\n");
        return;
    }

    while (decimal > 0)
    {
        result.push_back(digits[decimal % base]);
        decimal /= base;
    }

    reverse(result.begin(), result.end());

    cout << ("\n\n---- RESULT ----\n");
    cout << result << endl;
    cout << ("----------------\n");
}

int main()
{
    int choice;
    int srcBase, destBase;
    string input;

    while (true)
    {
        cout << ("\n---- NUMBER SYSTEM ----");
        cout << ("\n1 - Start Conversion___?");
        cout << ("\n0 - EXIT (Abort)___!!!");
        cout << ("\nEnter choice: ");
        cin >> choice;

        if (!cin)
        {
            cerr << "\n___INVALID! Please try again!___\n";
            return 1;
        }

        if (choice == 0)
        {
            cout << ("\nExiting program.....Sayonara!\n");
            break;
        }

        else if (choice == 1)
        {
            cout << ("\nEnter Source Base (2 - 36): ");
            cin >> srcBase;

            cout << ("Enter Destination Base (2 - 36): ");
            cin >> destBase;

            if (srcBase < 2 || srcBase > 36 || destBase < 2 || destBase > 36)
            {
                cout << ("___ ! BASE OUT OF BOUNDS ! ___") << endl;
                continue;
            }

            cout << ("Enter the Number: ");
            cin >> input;

            if (!isValid(input, srcBase))
            {
                cout << ("\n___ERROR: Invalid number for base!___ ") << srcBase << endl;
                continue;
            }

            unsigned long long decimal = toDecimal(input, srcBase);
            fromDecimal(decimal, destBase);
        }

        else { cout << ("\n___INVALID! Please try again!___\n") << endl; }
    }

    return 0;
}