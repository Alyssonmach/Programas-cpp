// Exerc�cio 2.24: ex02_24.cpp
// N�mero �mpar e n�mero par
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	
	cout << "Type an integer: ";
	
	cin >> number;
	
	if(number % 2 == 0)
		cout << "The integer is even." << endl;
	else
		cout << "The integer is odd." << endl;
	
	return 0;
}