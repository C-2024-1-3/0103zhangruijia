#include <iostream>
using namespace std;
class cuboid {
private:
	int length, width, height;
public:
	cuboid(int length=0 , int width=0 , int height=0 ) {
		this->length=length, this->width=width, this->height=height;
	}
	int v() {
		return length * width * height;
	}
	~cuboid() {};
};
int main() {
	int l1, w1, h1, l2, w2, h2, l3, w3, h3;
	cin >> l1 >> w1 >> h1 >> l2 >> w2 >> h2 >> l3 >> w3 >> h3;
	cuboid cub1(l1, w1, h1), cub2(l2, w2, h2), cub3(l3, w3, h3);
	cout << "v1 = " << cub1.v() << endl << "v2=" << cub2.v() << endl << "v3=" << cub3.v();
	return 0;
}