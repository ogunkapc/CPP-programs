//C++ program to find the sum of even numbers between 2 and 100
#include <iostream>
using namespace std;

int even(int start, int end){
	int sum;
	
	for(int i=start; i<=end; i++)
	{
		if(i % 2 == 0)
		{
			//cout << i << endl;
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int sum = even(2,100);
	cout << "sum of even numbers from 2 to 100 is: " << sum <<endl;
	
	system ("pause");
	return 0;
}
