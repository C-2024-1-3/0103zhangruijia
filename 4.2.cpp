#include <iostream>
#include <iomanip>
using namespace std;
void  Soft(double list[])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main() {
	cout << "����ʮ����" << endl;
	double list[10];
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	Soft(list);
	cout << "�����:";
	for (int i = 0; i < 10; i++) {
		cout << list[i] << " ";
	}return 0;

}
