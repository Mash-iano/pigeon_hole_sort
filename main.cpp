#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class PigeonholeSorter {
public:
    void sortData() {
        int n, minVal, maxVal;

        cout << "--- Pigeonhole Sorting Utility ---" << endl;
        cout << "Enter number of elements to sort: ";
        cin >> n;

        if (n <= 0) return;

        // range setup
        cout << "Enter the expected minimum and maximum values: ";
        cin >> minVal >> maxVal;

        if (minVal > maxVal) {
            cout << "Error: Min cannot be greater than Max." << endl;
            return;
        }

        // vector prevents stack overflow
        int range = maxVal - minVal + 1;
        vector<int> holes(range, 0);

        cout << "Enter " << n << " integers:" << endl;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num < minVal || num > maxVal) {
                cout << "Warning: Value " << num << " is out of range! Skipping." << endl;
            } else {
                holes[num - minVal]++;
            }
        }

        cout << "\nSorted sequence: ";
        for (int i = 0; i < range; i++) {
            while (holes[i] > 0) {
                cout << (i + minVal) << " ";
                holes[i]--;
            }
        }
        cout << endl;
    }
};

int main() {
    PigeonholeSorter sorter;
    sorter.sortData();
    return 0;
}