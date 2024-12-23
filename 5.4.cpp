#include <iostream>
using namespace std;
class student {
private:int number, score;
public:
	void show() {
		cout << number << " " << score << endl;
	}
	student (int number =0,int score=0){
		this->number = number, this->score = score;
	}
	int sco() {
		return score;
	}
};
int max(student* a[]) {
	int s = 0, b, c;
	for (int i = 0; i < 4; i++) {
		if (a[i]->sco() >= s)s = a[i]->sco();
	}
	return s;
}

int main() {int a[5], b[5];
for (int i = 0; i < 5; i++) {
	cin >> a[i] >> b[i];
}
	student stu[5]= { student(a[0],b[0]),
		student(a[1],b[1]),
		student(a[2],b[2]),
		student(a[3],b[3]),
		student(a[4],b[4]),
	};
	student* p[5]; 
	for (int i = 0; i < 5; i++) {
		p[i] = &stu[i];
	}
	int s = max(p);
	for (int i = 0; i < 5; i++) {
		if (p[i]->sco() == s)p[i]->show();
	}
	return 0;
}