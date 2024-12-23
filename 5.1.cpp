#include <iostream>
using namespace std;

class Time {               // 定义Time类
private:
    int hour;              // 私有数据成员
    int minute;
    int sec;
public:
    void inputTime() {
        cin >> hour >> minute >> sec;
    }
    void outputTime() const {
        cout << hour << "：" << minute << "：" << sec << endl;
    }
};
int main() {
    Time t1;              
    t1.inputTime();        
    t1.outputTime();       
    return 0;
}
