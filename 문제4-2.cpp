#include <iostream>
using namespace std;
class Point {
private:
	int xpos, ypos;
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void showPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};
class Circle {
private:
	int rad;
	Point center;
public:
	void Init(int x, int y, int r) {
		rad = r;
		center.Init(x, y);
	}
	void ShowCircleInfo() const {
		cout << "radius : " << rad << endl;
		center.showPointInfo();
	}
};
class Ring {
private:
	Circle inCircle;
	Circle outCircle;
public:
	void Init(int x1, int y1, int r1, int x2, int y2, int r2) {
		inCircle.Init(x1, y1, r1);
		outCircle.Init(x2, y2, r2);
	}
	void ShowRingInfo() {
		cout << "Inner Circle Info..." << endl;
		inCircle.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outCircle.ShowCircleInfo();
	}
};
int main(void) {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}