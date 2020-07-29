// Figura 3.3: fig03_03.cpp
// Define a classe GradeBook com uma fun��o-membro que aceita um par�metro;
// Cria um objeto GradeBook e chama sua fun��o-membro displayMessage.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string> // O programa utiliza a classe string padr�o do C++

using std::string;
using std::getline;

// Defini��o da classe GradeBook
class GradeBook
{
	public:
		// Fun��o que exibe uma mensagem de boas-vindas ao usu�rio do GradeBook
		void displayMessage(string courseName)
		{
			cout << "Welcome to the GradeBook for\n" << courseName << "!" << 
			endl;
			
		} // Fim da fun��o display Message
}; // Fim da classe GradeBook

// A fun��o main inicia a execu��o do programa
int main()
{
	string nameOfCourse; // Strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; // Cria um objeto GradeBook chamado myGradeBook
	
	// prompt para a entrada do nome do curso
	cout << "Please enter the course name: ";
	getline(cin, nameOfCourse); // L� o nome de um curso com espa�os em branco
	cout << endl; // Gera sa�da de uma linha em branco;
	
	// Chama a fun��o displayMessage de myGradeBook
	// e passa nameOfCourse como arguemento
	myGradeBook.displayMessage(nameOfCourse);
	
	return 0; // Indica termina��o bem-sucedida
} // Fim da main