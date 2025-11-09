#include <iostream>
using namespace std;

int main() {
    int wires[10];
    int temp[10]; 

    cout << "Enter 10 wire codes: ";
    for (int i = 0; i < 10; i++) {
        cin >> wires[i];
        temp[i] = wires[i]; 
    }

    
    for (int i = 0; i < 5; i++) {
        int swap_temp = temp[i];
        temp[i] = temp[9 - i];
        temp[9 - i] = swap_temp;
    }

    cout << "All reversed: ";
    for (int i = 0; i < 10; i++)
        cout << temp[i] << " ";
    cout << endl;

    for (int i = 0; i < 10; i++)
        temp[i] = wires[i];

    for (int i = 0; i < 2; i++) { 
        int swap_temp = temp[2 * i];
        temp[2 * i] = temp[8 - 2 * i];
        temp[8 - 2 * i] = swap_temp;
    }

    cout << "Even positions reversed: ";
    for (int i = 0; i < 10; i++)
        cout << temp[i] << " ";
    cout << endl;

    for (int i = 0; i < 10; i++)
        temp[i] = wires[i];

    for (int i = 0; i < 2; i++) { 
        int swap_temp = temp[2 * i + 1];
        temp[2 * i + 1] = temp[9 - (2 * i + 1)];
        temp[9 - (2 * i + 1)] = swap_temp;
    }

    cout << "Odd positions reversed: ";
    for (int i = 0; i < 10; i++)
        cout << temp[i] << " ";
    cout << endl;

    return 0;
}