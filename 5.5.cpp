#include <iostream>
using namespace std;
class point {
private :
	int x, y;
public:
	point(int x = 0, int y = 0) {
		this->x = x, this->y = y;
	}
	void setpoint(int i, int j) {
		this->x += i, this->y += j;
	}
	void display() {
		cout << "x:" << x << "y:" << y;
	}
};
int main() {
	point poi1(60, 80);
	poi1.setpoint(10, 10);
	poi1.display();
	return 0;
}