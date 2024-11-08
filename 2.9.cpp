
#include <iostream>
using namespace std;
int main()
{
	double av, num = 0;
	int i = 2, j = 0, x = 1;
	while( i < 100) {
		num += i * 0.8;
		x++;
		i=i * 2;
	}
	av = num / x;
	cout << av;
	return 0;
}
