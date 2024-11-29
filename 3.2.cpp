#include <iostream>
using namespace std;
#include<cmath>
#define M 2000
int flag[M], ans[200];
bool is_Prime(int num)
{
    if (num == 2)
        return true;
    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2)
    {
        if (num % i == 0)
            return false;
    }
}
bool remove(int num)
{
    for (int i = num; i < M; i += num)
    {
        flag[i] = 0;
    }
    return 0;
}

int main()
{

    memset(flag, 1, sizeof(flag));

    ans[0] = 2;
    for (int i = 1; i < 200; i++)
    {
        for (int j = 3; j < M; j += 2)
        {
            if (!flag[j]) continue;
            if (is_Prime(j)) {
                ans[i] = j;

            }
            remove(j);
            break;
        }

    }
    for (int i = 0; i < 200; i++)
    {
        cout << ans[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;

    }
    system("pause");
    return 0;
}