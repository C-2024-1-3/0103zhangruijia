#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
#include <string>
using namespace std;
int main()
{
	Student stud;                //�������
	Student stud1;
	stud1.setvalue(007, "tag", 'm');
	stud1.display();              //ִ��stud�����display����
	return 0;
}
