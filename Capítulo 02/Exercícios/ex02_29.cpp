// Exerc�cio 2.29: ex02_29.cpp
// Quadrados e cubos
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i;
	
	cout << "inteiro\t\t" << "quadrado" << "\tcubo" << endl;
	
	for(i = 0; i < 11 - 1; i++)
	{
		cout << i << "\t\t" << i * i << "\t\t" << i * i * i << endl;
	}
	
	return 0;
}