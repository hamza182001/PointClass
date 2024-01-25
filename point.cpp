#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
public:
	Point();
	Point(int x, int y){
		this->x = x;
		this->y = y;

	}
	void display(){
		cout << "X coordinate:" << x << endl;
		cout << "Y coordinate:" << y << endl;

	}
};
int main(){
	





	return 0;
}