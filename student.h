#pragma once
class Student              //类声明
{private:
	int num;
	char name[20];
	char sex;
public:     
	void display();//公用成员函数原型声明
	void setvalue(int num,const char* na,char s);

};
