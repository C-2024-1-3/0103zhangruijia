
#include<iostream>
using namespace std;
int main() {
		double x, y, z;
		cin >> x >> y >> z;
		cout << x + y + z;
	
		if (x + y > z && x + z > y && y + z > x) {


			if （x == y || y == z || z == x）cout << "为等腰三角形" << endl;
			else cout << "不为等腰三角形" << endl;
		}
			else cout << "不能构成三角形" << endl；
				return 0;
			}
				


