#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int upper = 0, lower = 0, digits = 0;

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            upper++;
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) {
            lower++;
            str[i] = toupper(str[i]);
        }
        else if (isdigit(str[i])) {
            digits++;
        }
    }

   
    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;
    cout << "Digits: " << digits << endl;
    cout << "Converted sentence: " << str << endl;

    return 0;
}