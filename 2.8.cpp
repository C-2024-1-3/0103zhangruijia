#include <iostream>
using namespace std; 
int main(){
double x1, x2; double a; cin >> a;
x2 = 1.0; 
for (;;) {
	if (a < 0) { cout < "负数无平方根"; break; } 
	xl = x2;
x2 = (xl + a / x1) / 2.0; 
if (fabs(xl - x2) < 0. 00001) {
	cout << x2;
	break;
} return 0;
	}

