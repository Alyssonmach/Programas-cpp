// Exerc�cio 2.26: ex02_26.cpp
// padr�o de tabuleiro
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	
	int i, j;
	
	for(i = 0; i <= 8 - 1; i++)
	{
		for(j = 0; j <= 8 - 1; j++)
		{
			if(i % 2 == 0)
				cout << "* ";
			else
				cout << " *";
		}
		cout << endl;
	}
	
	return 0;
}