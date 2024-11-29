#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
        if (list1[i] < list2[j]) {
            list3[k] = list1[i]; i += 1; k += 1;
        }
        else {
            list3[k] = list2[j]; j += 1; k += 1;
        }if (i == size1)for (; j < size2; j++, k++)list3[k] = list2[j];
        else for (; i < size1; i++, k++)list3[k] = list1[i];
}

int main() {
    int size1, size2;
    cout << "�������һ�������Ԫ�ظ���: ";
    cin >> size1;
    int* list1 = new int[size1]; 
    cout << "�������һ�������Ԫ��: ";
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }

    
    cout << "������ڶ��������Ԫ�ظ���: ";
    cin >> size2;
    int* list2 = new int[size2];  
    cout << "������ڶ��������Ԫ��: ";
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    
    int* list3 = new int[size1 + size2];  

    
    merge(list1, size1, list2, size2, list3);

    
    cout << "�ϲ��������Ϊ: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    
    delete[] list1;
    delete[] list2;
    delete[] list3;

    return 0;
}
