#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}


void lcm(int a, int b, int& result) {
    result = (a * b) / gcd(a, b);  
}

int main() {
    int m, n;

    cout << "������������Ȼ�� ��" << endl;
    cin >> m >> n;

  
    int a = gcd(m, n);

    
    int b;
    lcm(m, n,b);

    
    cout << "���Լ�� " <<    a << endl;
    cout << "��С������ " <<  b << endl;

    return 0;
}
