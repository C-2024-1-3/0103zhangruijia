#include <iostresam>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (a > 96 && a < 123)cout << static_cast<char>(a - 32) << endl;
	else cout << a + 1 << endl;
	return 0;
}