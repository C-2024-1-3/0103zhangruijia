#include<iostream>
#include <iostream>
using namespace std;
int main() {
	float F, C;
	cout << "请输入华氏温度"；
		cin >> F;
	C = (F - 32) * 5 / 9;
	cout << endl << "对应的摄氏温度：" << setprecision(4) << C;
	return 0;
}
