#include <iostream>
using namespace std;

int main() {
    int scores[10];

    cout << "Enter 10 spy scores: ";
    for (int i = 0; i < 10; i++)
        cin >> scores[i];

    int highest = scores[0], lowest = scores[0];
    double total = 0;

    for (int i = 0; i < 10; i++) {
        if (scores[i] > highest) highest = scores[i];
        if (scores[i] < lowest) lowest = scores[i];
        total += scores[i];
    }

    double avg = total / 10;

    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;
    cout << "Average: " << avg << endl;

    bool found = false;
    for (int i = 0; i < 10; i++) {
        double leftSum = 0, rightSum = 0;

        for (int j = 0; j < i; j++)
            leftSum += scores[j];

        for (int j = i + 1; j < 10; j++)
            rightSum += scores[j];

        int leftCount = i;        
        int rightCount = 9 - i;  

        if (leftCount > 0 && rightCount > 0) {
            double leftAvg = leftSum / leftCount;
            double rightAvg = rightSum / rightCount;

            if (leftAvg == rightAvg) {
                cout << "Fair Split Index: " << i << endl;
                found = true;
            }
        }
    }

    if (!found)
        cout << "No fair split found." << endl;

    return 0;
}