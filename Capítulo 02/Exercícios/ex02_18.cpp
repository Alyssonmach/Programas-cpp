// Exerc�cio 2.18: ex02_18.cpp
// Data: 20/07/2020
// Hor�rio: 15:57 PM
// Maior de dois n�meros
#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int integer1;
	int integer2;
	
	cout << "Enter two integers: ";
	cin >> integer1 >> integer2;
	
	if(integer1 > integer2)
		cout << integer1 << " � o maior." << endl;
	else if (integer2 > integer1)
		cout << integer2 << " � o maior." << endl;
	else
		cout << "Estes n�meros s�o iguais." << endl;
	
	return 0;
}