// Figura 2.2: fig02_02.cpp
// Autor: Alysson Machado
// Data: 16/07/2020
// Hor�rio: 10:13 AM
// Programa sequ�ncias de escape
#include <iostream> // Permite ao programa realizar entrada e sa�da
#include <locale> // Permite localizar programas
 
// A fun��o main inicia a execu��o do programa
int main()
{
	
	setlocale(LC_ALL, "Portuguese"); // Adapta��o do programa ao idioma desejado
	
	std::cout << "Nova Linha\n"; // Exibe a mensagem
	std::cout << "\tTabula��o Horizontal"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "        de Carro\rRetorno"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "Alerta\a"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "Barras Invertidas \\"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "Aspas Simples \'"; // Exibe a mensagem
	std::cout << "\n"; //Nova linha
	std::cout << "Aspas Duplas \""; // Exibe a mensagem
	
	return 0; // Indica que o programa terminou com sucesso
} // Fim da fun��o main
