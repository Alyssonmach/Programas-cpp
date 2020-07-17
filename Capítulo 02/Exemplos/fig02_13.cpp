// Figura 2.13: fig02_13.cpp
// Data: 17/07/2020
// Hor�rio: 10:46 AM
// Comparando inteiros utilizando instru��es if, operadores relacionais
#include <iostream> // Permite ao programa realizar entrada e sa�da

using std::cout; // O programa utiliza cout
using std::cin; // O programa utiliza cin
using std:: endl; // O programa utiliza endl

// A fun��o main inicia a execu��o do programa
int main()
{

	int number1; // Primeiro inteiro a comparar
	int number2; // Segundo inteiro a comparar
	
	cout << "Enter two integers to compare: "; // Solicita Dados do Usu�rio
	cin >> number1 >> number2; // L� dois n�meros inteiros fornecidos pelo usu�rio
	
	if(number1 == number2)
		cout << number1 << "==" << number2 << endl;
	
	if(number1 != number2)
		cout << number1 << "!=" << number2 << endl;
	
	if(number1 <= number2)
		cout << number1 << "<=" << number2 << endl;
	
	if(number1 >= number2)
		cout << number1 << ">=" << number2 << endl;
	
	if(number1 < number2)
		cout << number1 << "<" << number2 << endl;
	
	if(number1 > number2)
		cout << number1 << ">" << number2 << endl;
	
	return 0; // Indica que o programa terminou com sucesso
	
} // Fim da fun��o main