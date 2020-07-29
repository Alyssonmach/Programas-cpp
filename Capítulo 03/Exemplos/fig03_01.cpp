// Figura 3.1: fig03_01.cpp
// Define a classe GradeBook com uma fun��o-membro displayMessage;
// Cria um objeto GradeBook e chama sua fun��o displayMessage.
#include <iostream>

using std::cout;
using std::endl;

// Defini��o da classe GradeBook
class GradeBook
{
	public:
		// Fun��o que exibe uma mensagem de boas-vindas ao usu�rio do GradeBook
		void displayMessage()
		{
			cout << "Welcome to the GradeBook!" << endl;
		} // Fim da fun��o displayMessage
}; // Fim da classe GradeBook

int main()
{
	GradeBook myGradeBook; // Cria um objeto GradeBook chamado myGradeBook
	
	myGradeBook.displayMessage(); // Chama a fun��o displayMessage do objeto
	
	return 0; // Indica termina��o bem sucedida
} // Fim da main