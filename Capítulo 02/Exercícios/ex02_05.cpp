// Exerc�cio 2.5: ex02_05.cpp
// Data: 20/07/2020
// Hor�rio: 14:58 PM
// Calcula o produto de tr�s inteiros
#include <iostream> // Permite ao programa realizar entrada e sa�da

using std::cout; // O programa utiliza cout
using std::cin; // O programa utiliza cin
using std::endl; // O programa utiliza endl

// A fun��o main inicia a execu��o do programa
int main()
{
	int x; // Primeiro inteiro a multiplicar
	int y; // Segundo inteiro a multiplicar
	int z; // Terceiro inteiro a multiplicar
	int result; // O produto de tr�s inteiros;
	
	cout << "Enter three integers: "; // Solicita dados ao usu�rio
	cin >> x >> y >> z; // L� tr�s inteiros do usu�rio
	result = x * y * z; // Multiplica os tr�s inteiros; atribui a result
	cout << "The product is " << result << endl; // Imprime resultado; termina linha
	
	return 0; // Indica que o programa terminou com sucesso
} // Fim da fun��o main

