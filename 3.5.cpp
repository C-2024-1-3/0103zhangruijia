#include <iostream>
using namespace std;
int peaches(int day)
{
    if (day == 10)
    {
        return 1;
    }
    return (peaches(day + 1) + 1) * 2;
}
int main()
{
    int firstDayPeaches = peaches(1);
    cout << "��һ�����ժ�� " << firstDayPeaches << " ������" << endl;
    return 0;
}