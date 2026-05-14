#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of family members: ";
    cin >> n;

    string names[n];
    int ages[n];


    for (int i = 0; i < n; i++) {
        cout << "Enter name of member " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter age of " << names[i] << ": ";
        cin >> ages[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
                swap(ages[j], ages[j + 1]);
            }
        }
    }

    string key;
    cout << "\nEnter the name to search: ";
    cin >> key;


    int left = 0, right = n - 1;
    bool found = false;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (names[mid] == key) {
            cout << key << " was found and age is "
                 << ages[mid] << endl;
            found = true;
            break;
        }
        else if (key < names[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
