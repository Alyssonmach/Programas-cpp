#include <iostream>
#include <locale>
#include "Horario.cpp"

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Programa meu rel�gio" << endl << endl;
	
	Horario rel;
	
	rel.alteraHorario(23,48,56);
	
	cout << "Hor�rio Universal: ";
	rel.imprUniv();
	
	cout << endl << endl;
	
	cout << "Hor�rio Padr�o: ";
	rel.imprPadr();
	
	
	
	return 0;
}