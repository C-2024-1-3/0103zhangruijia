#include <iostream>
#include "student.h"    
#include <string>
#include <cstring>
using namespace std;//��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::setvalue(int n,const char* na,char s) {
    num = n, strcpy(name, na), sex = s;

}
