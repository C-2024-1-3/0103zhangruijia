#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n, count = 0;
    bool is_duplicate;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        is_duplicate = false;
        for (int j = 0; j < count; j++) {
            if (arr[j] == n) {
                is_duplicate = true;
                break;
            }
        }

        if (!is_duplicate) {
            arr[count] = n;
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
