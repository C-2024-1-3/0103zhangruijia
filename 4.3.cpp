#include <iostream>
using namespace std;

bool arr[101];
void reverse(bool& a)
{
    if (a == 1) a = 0;
    else a = 1;
}
int main()
{
    memset(arr, 1, 101);
    for (int i = 2; i <= 100; i++)
    {
        for (int j = i; j <= 100; j = j + i + 1)
        {
            reverse(arr[j]);
        }
    }
    for (int i = 1; i <= 100; i++)
    {
        if (arr[i]) cout << i << " ";
    }
    system("pause");
    return 0;
}