#include <iostream>

using namespace std;

int main()
{
	int t;	//declaring variables for time 
	float I, p, r, a;	//declaring variables for Interest Principal, rate and Amount

	cout << "\tSIMPLE INTEREST CALCULATION" << endl;
	cout << "Enter the Principal amount: ";
	cin >> p;
	cout << "\nEnter the rate: ";
	cin >> r;
	cout << "\nEnter the time period: ";
	cin >> t;

	I=(p*r*t)/100;
	cout << "Your Interest is " << I << endl;


	return 0;
}
