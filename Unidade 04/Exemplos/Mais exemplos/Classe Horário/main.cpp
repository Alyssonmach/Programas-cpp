#include <iostream>

using namespace std;

#include "Horario.cpp"

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	Horario t;
	
	cout << "O hor�rio universal �: " << endl;
	t.imprUniv();
	
	cout << endl;
	
	cout << "O hor�rio americano �: " << endl;
	t.imprPadrao();
	
	t.alteraHorario(22, 45, 13);
	
	cout << endl;
	
	cout << "O hor�rio universal �: " << endl;
	t.imprUniv();
	
	cout << endl;
	
	cout << "O hor�rio americano �: " << endl;
	t.imprPadrao();
	
	return 0;
}