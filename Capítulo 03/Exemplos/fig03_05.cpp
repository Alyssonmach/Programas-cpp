// Figura 3.5: fig02_05.cpp
// Define a classe GradeBook que possui um membro de dados courseName
// e fun��es-membro para configurar e obter o seu valor;
// Cria e manipula um objeto GradeBook com essas fun��es.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string> // O programa utiliza classe de string padr�o C++

using std::string;
using std::getline;

// Defini��o da classe GradeBook
class GradeBook
{
	public:
		// Fun��o que configura o nome do curso
		void setCourseName(string name)
		{
			courseName = name; // Armazena o nome do curso no objeto
		} // Fim da fun��o setCourseName
		
		// Fun��o que obt�m o nome do curso
		string getCourseName()
		{
			return courseName; // Retorna o courseName do objeto
		} // Fim da fun��o getCourseName
		
		
		// Fun��o que exibe uma mensage de boas vindas
		void displayMessage()
		{
			// Essa instru��o chama getCourseName para obter o nome do curso
			// que esse GradeBook representa
			cout << "Welcome to the GradeBook for\n" << getCourseName() << "!"
			<< endl;
			
		} // Fim da fun��o displayMessage
		
	private:
		string courseName; // Nome do curso para esse GradeBook
}; // Fim da classe GradeBook

// A fun��o main inicia a execu��o do programa
int main()
{
	string nameOfCourse; // Strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; // Cria um objeto GradeBook chamado myGradeBook
	
	// Exibe valor inicial de courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
	
	// solicita, insere e configura o nome do curso
	cout << "\nPlease enter the course name: ";
	getline(cin, nameOfCourse); // L� o nome de um curso com espa�os em branco
	myGradeBook.setCourseName(nameOfCourse); // Configura o nome do curso
	
	cout << endl; // Gera sa�da de uma linha em branco
	
	myGradeBook.displayMessage(); // Exibe a mensagem com o novo nome do curso
	
	return 0; // Indica termina��o bem-sucedida
} // Fim da main



