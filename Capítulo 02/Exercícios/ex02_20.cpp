// Exerc�cio 2.20: ex02_20.cpp
// Opera��es Trigonom�tricas
#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	float pi = 3.14159;
	
	cout << "Digite o raio: ";
	cin >> raio;
	
	cout << "Di�metros: " << raio * 2 << endl;
	cout << "Circunfer�ncia: " << 2 * pi * raio << endl;
	cout << "�rea do C�rculo: " << pi * raio * raio;
	
	return 0;
}