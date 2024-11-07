#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	float F, C;
	cout << " 请输入华氏温度"；
		cin >> F;
	C = (F - 32) * 5 / 9;
	cout << endl << "对应摄氏度为" << setprecision(4) << C;
	return 0;
}