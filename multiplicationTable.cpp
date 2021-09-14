#include <iostream>
using namespace std;

int main(){
	int number, multiplier;
	
	cout << "Enter the number for the multiplications table: ";
	cin >> number;
	
	for(multiplier = 0; multiplier <=10; multiplier++){
		cout << number << " * " << multiplier << " = " << number * multiplier << endl;
	}
	
	return 0;
}

