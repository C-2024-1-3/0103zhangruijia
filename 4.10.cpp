#include <iostream>
using namespace std;

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "请输入数组的元素个数：";
    cin >> size;
    int* arr = new int[size];
    cout << "请输入 " << size << " 个整数：" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sortArray(arr, size);
    cout << "排序后的数组元素：" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
