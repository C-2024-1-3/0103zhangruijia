#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int e = 0, b = 0, f = 0, d = 0;
	char a[10000] = { 0 }
	cin.getline(a, sizeof(a));
	for (int i = 0; a[i] != '\n'; i++) {
		char c = a[i];
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			e++;
		else if (c >= '0' && c <= '9')b++;
		else if (c == ' ')f++;
		else d++;
	}
	cout << "letter" << e << "digit" << b << "space " << f << "other" << d << endl;
	return 0;
}