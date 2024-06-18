#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
private:
	double x, y;
public:
	void input();
	double length();
};

void Vector::input()
{
	cout << "Enter x: " << endl;
	cin >> x;
	cout << "Enter y: " << endl;
	cin >> y;
}

double Vector::length()
{
	cout << "x=" << x << "\n" << "y=" << y << endl;
	double result = sqrt(pow(x, 2) + pow(y, 2));
	return result;
}

int main()
{
	Vector out;
	out.input();
	cout << "Result: " << out.length() << endl;
	return 0;
}


