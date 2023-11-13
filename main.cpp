#include "strlib.h"

using namespace std;

int main() {
    char str1[50], str2[50];
    cout << "Enter the first string: ";
    cin.getline(str1, 50);

    cout << "Enter the second string: ";
    cin.getline(str2, 50);

    int choice;
    cout << "Choose a string function to perform:\n";
    cout << "1. Calculate string length\n";
    cout << "2. Copy string\n";
    cout << "3. Concatenate strings\n";
    cout << "4. Find character in string\n";
    cout << "5. Find substring in string\n";
    cout << "6. Compare strings\n";
    cout << "7. Convert string to number\n";
    cout << "8. Convert number to string\n";
    cout << "9. Uppercase string\n";
    cout << "10. Lowercase string\n";
    cout << "11. Reverse string\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

    case 6:
        cout << "String comparison result: " << StringFunctions::mystrcmp(str1, str2) << endl;
        break;
    case 7:
        cout << "Converted string to number: " << StringFunctions::StringToNumber(str1) << endl;
        break;
    case 8: {
        int number;
        cout << "Enter a number to convert to string: ";
        cin >> number;
        char* result = StringFunctions::NumberToString(number);
        cout << "Converted number to string: " << result << endl;
        delete[] result; 
        break;
    }
    case 9:
        cout << "Uppercased string: " << StringFunctions::Uppercase(str1) << endl;
        break;
    case 10:
        cout << "Lowercased string: " << StringFunctions::Lowercase(str1) << endl;
        break;
    case 11:
        cout << "Reversed string: " << StringFunctions::mystrrev(str1) << endl;
        break;
    default:
        cout << "Invalid choice\n";
    }

    return 0;
}

