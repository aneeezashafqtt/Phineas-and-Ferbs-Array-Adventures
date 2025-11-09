#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char msg[51];

    cout << "Enter secret message: ";
    cin.getline(msg, 51);

    int letters = 0, digits = 0, spaces = 0;

    for (int i = 0; msg[i] != '\0'; i++) {
        if (isalpha(msg[i]))
            letters++;
        else if (isdigit(msg[i]))
            digits++;
        else if (isspace(msg[i]))
            spaces++;
    }

    int len = strlen(msg);
    while (len > 0 && isspace(msg[len - 1])) {
        msg[len - 1] = '\0';
        len--;
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Cleaned message: \"" << msg << "\"" << endl;

    return 0;
}