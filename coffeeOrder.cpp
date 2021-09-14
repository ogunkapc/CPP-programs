/*Coffee website*/
#include <iostream>
#include <math.h>
#define regPrice 9
#define decafPrice 8
#define mochaPrice 11 

using namespace std;
int main(){
	int reg, decaf, mocha;
	int totalReg, totalDecaf, totalMocha, totalCoffee;
	
	cout << "How many bags of regular coffee do you want?";
	cin >> reg;
	
	cout << "How many bags of decaffeinated coffee do you want?";
	cin >> decaf;
	
	cout << "How many bags of mocha coffee do you want?";
	cin >> mocha;
	
	cout << endl;
	
	//calculating total of each category bought
	totalReg = regPrice * reg;
	totalDecaf = decafPrice * decaf;
	totalMocha = mochaPrice * mocha;
	
	cout << "You purchased " << reg << " bags of regular, totalling $" << totalReg << endl;
	cout << "You purchased " << decaf << " bags of Decaf, totalling $" << totalDecaf << endl;
	cout << "You purchased " << mocha << " bags of Mocha, totalling $" << totalMocha << endl;
	
 //total price of purchased items
	totalCoffee = totalReg + totalDecaf + totalMocha;
	if (totalCoffee > 100){
		totalCoffee = totalCoffee - 15;
	}
	
	cout << "Your total purchase costs: $" << totalCoffee << endl;
	
	system ("pause");
	return 0;
}
