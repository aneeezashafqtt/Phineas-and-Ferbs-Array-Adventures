#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word1[50], word2[50];

    cout << "Enter two words: ";
    cin >> word1 >> word2;

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    cout << "\n--- String Analysis ---" << endl;
    cout << "Word 1: " << word1 << " (Length: " << len1 << ")" << endl;
    cout << "Word 2: " << word2 << " (Length: " << len2 << ")" << endl;

    cout << "\nLength Comparison:" << endl;
    if (len1 > len2)
        cout << "Word1 is longer than Word2" << endl;
    else if (len2 > len1)
        cout << "Word2 is longer than Word1" << endl;
    else
        cout << "Both words have equal length" << endl;

    char joined[100];
    strcpy_s(joined, sizeof(joined), word1);  
    strcat_s(joined, sizeof(joined), " ");    
    strcat_s(joined, sizeof(joined), word2);  

    cout << "\nConcatenation:" << endl;
    cout << "Joined string: " << joined << endl;

    cout << "\nIdentity Check:" << endl;
    int comparison = strcmp(word1, word2);
    if (comparison == 0)
        cout << "Words are identical" << endl;
    else if (comparison < 0)
        cout << "Words are different (Word1 comes before Word2 alphabetically)" << endl;
    else
        cout << "Words are different (Word1 comes after Word2 alphabetically)" << endl;

    return 0;
}