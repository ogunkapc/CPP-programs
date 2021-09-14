#include <iostream>
using namespace std;

int multiply(int num1, int num2){
	int product = num1 * num2;
	return product;
}

int main(){
	int number1, number2, result;
	
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	
	result = multiply(number1, number2);
	cout << "The product is: " << result << endl;
}
