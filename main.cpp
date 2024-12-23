#include <iostream>             //将类声明头文件包含进来
#include "student.h"
#include <string>
using namespace std;
int main()
{
	Student stud;                //定义对象
	Student stud1;
	stud1.setvalue(007, "tag", 'm');
	stud1.display();              //执行stud对象的display函数
	return 0;
}
