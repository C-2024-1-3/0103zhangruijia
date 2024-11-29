#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	cout << "ÊäÈëÈý±ß³¤" << endl;
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		cout << _area(side1, side2, side3);
	}
	return 0;

}
