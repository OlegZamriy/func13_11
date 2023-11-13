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
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Length of the first string: " << StringFunctions::mystrlen(str1) << endl;
        break;
    case 2:
        StringFunctions::mystrcpy(str1, str2);
        cout << "Copied string: " << str1 << endl;
        break;
    case 3:
        StringFunctions::mystrcat(str1, str2);
        cout << "Concatenated string: " << str1 << endl;
        break;
    case 4: {
        char s;
        cout << "Enter the character to find: ";
        cin >> s;
        char* result = StringFunctions::mystrchr(str1, s);
        if (result != nullptr) {
            cout << "Character found at position: " << result - str1 << endl;
        }
        else {
            cout << "Character not found in the string.\n";
        }
        break;
    }
    case 5: {
        char* result = StringFunctions::mystrstr(str1, str2);
        if (result != nullptr) {
            cout << "Substring found at position: " << result - str1 << endl;
        }
        else {
            cout << "Substring not found in the string.\n";
        }
        break;
    }
    default:
        cout << "Invalid choice\n";
    }

    return 0;
}


