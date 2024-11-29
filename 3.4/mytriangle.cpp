#include <iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)
		return true;
	else {
		cout << "´íÎó";
		return false;
	}
}
double _area(double side1, double side2, double side3){
	int s = (side1 + side2 + side3) / 2;
	int a = sqrt(s * (s - side1)*(s - side2)*(s - side3));
	return a;
}
