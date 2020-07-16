// Figura 2.5: fig02_05.cpp
// Autor: Alysson Machado
// Hor�rio: 10:29 AM
// Programa de adi��o que exibe a soma de dois n�meros
#include <iostream> // Permite ao programa realizar entrada e sa�da

// A fun��o main inicia a execu��o do programa
int main()
{
	// Declara��o de vari�veis
	int number1; // Primeiro inteiro a adicionar
	int number2; // Segundo inteiro a adicionar
	int sum; // Soma de number1 e number2
	
	std::cout << "Enter first Integer: "; // Solicita dados ao usu�rio
	std::cin >> number1; // L� o primeiro inteiro inserido pelo usu�rio em number1
	
	std::cout << "Enter second Integer: "; // Solicita dados ao usu�rio
	std::cin >> number2; // L� o segundo inteiro inserido pelo usu�rio em number2
	
	sum = number1 + number2; // Adiciona os n�meros; Armazena os resultados em sum
	
	std::cout << "Sum is " << sum << std::endl; // Exibe sum; termina linha
	
	return 0; // Indica que o programa terminou com sucesso
	
} // Fim da fun��o main