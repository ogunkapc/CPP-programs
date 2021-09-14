#include <iostream>
#include <cmath>

using namespace std;
double r(int x, int y);

int main()
{
	int x, y;
	double distance;
	cout << "Enter the value of x: " << endl;
	cin >> x;
	cout << "Enter the value of y: " << endl;
	cin >> y;
	
	distance = r(x, y);
	cout << "distance = " << distance << endl;
	
	return 0;
}
double r(int x, int y)
{
	double r;
	r = sqrt((x*x) + (y*y));
	return r;
}
