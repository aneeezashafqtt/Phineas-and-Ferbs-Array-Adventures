#include <iostream>
using namespace std;

int main() {
    int balls[8] = { 5, 2, 8, 1, 9, 3, 7, 4 };
    int n = 8, temp, swaps = 0;

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
        cout << balls[i] << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (balls[j] > balls[j + 1]) {
                temp = balls[j];
                balls[j] = balls[j + 1];
                balls[j + 1] = temp;
                swaps++;
            }
        }
    }

    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
        cout << balls[i] << " ";
    cout << endl << "Total swaps: " << swaps;

    return 0;
}