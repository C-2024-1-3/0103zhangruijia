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

    cout << "请输入两个自然数 ：" << endl;
    cin >> m >> n;

  
    int a = gcd(m, n);

    
    int b;
    lcm(m, n,b);

    
    cout << "最大公约数 " <<    a << endl;
    cout << "最小公倍数 " <<  b << endl;

    return 0;
}
