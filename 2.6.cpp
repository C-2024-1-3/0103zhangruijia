#include <iostream>
using namespace std;
int q1(int a, int  b) {
    int x;
    if (a < b) {
        int t = b;
        b = a;
        a = t;
    }while (b != 0) {
        x = a % b;
        a = b;
        b = x;
    }return a;
}int q2(int a, int b) {
    int x = q1(a, b);
    return a * b / x;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << "最大公约数" << q1(num1, num2);
    cout << "最小公倍数" << q2(num1, num2);
    return 0;
}
