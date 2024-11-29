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
    cout << "第一天猴子摘了 " << firstDayPeaches << " 个桃子" << endl;
    return 0;
}