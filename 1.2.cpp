#include<iostream>
#define PI 3.14;
using namespace std;
int main()
{
	double r, h, v;
	cout << "请输入身高" << endl;
	cin >> r >> h;
	v = PI * r * r * h / 3.00;
	cout << "圆锥体积为" << v;

	return 0;
}
