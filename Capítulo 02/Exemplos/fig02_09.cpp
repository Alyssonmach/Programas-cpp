// Figura 2.9: fig02_09.cpp
// Programa de c�lculos aritm�ticos
#include <iostream> // Permite ao programa realizar entrada e sa�da

// A fun��o main inicia a execu��o do programa
int main()
{
	// Declara��o de vari�veis
	int number1; // Primeiro inteiro a adicionar
	int number2; // Segundo inteiro a adicionar
	int sum; // Soma de number1 e number2
	int subtraction; // Subtra��o de number1 e number2
	int division; // Divis�o de number1 e number2
	int multiplication; // Multiplica��o de number1 e number2
	int module; // M�dulo de number1 e number2
	 
	std::cout << "Enter first Integer: "; // Solicita dados ao usu�rio
	std::cin >> number1; // L� o primeiro inteiro inserido pelo usu�rio em number1
	
	std::cout << "Enter second Integer: "; // Solicita dados ao usu�rio
	std::cin >> number2; // L� o segundo inteiro inserido pelo usu�rio em number2
	
	sum = number1 + number2; // Adiciona os n�meros; Armazena os resultados em sum
	subtraction = number1 - number2; // Subtra� os n�meros; Armazena os resultados em subtraction
	division = number1 / number2; // Divide os n�meros; Armazena os resultados em division
	multiplication = number1 * number2; // Multiplica os n�meros; Armazena os resultados em multiplication
	module = number1 % number2; // M�dulo dos n�meros; Armazena os resultados em module
	
	std::cout << "Sum is " << sum << std::endl; // Exibe sum; termina linha
	std::cout << "Subtraction is " << subtraction << std::endl; // Exibe subtraction; termina linha
	std::cout << "Division is " << division << std::endl; // Exibe division; termina linha
	std::cout << "Multiplication is " << multiplication << std::endl; // Exibe multiplication; termina linha
	std::cout << "Module is " << module << std::endl; // Exibe module; termina linha
	
	return 0; // Indica que o programa terminou com sucesso
	
} // Fim da fun��o main