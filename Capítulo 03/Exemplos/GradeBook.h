// Figura 3.9: GradeBook.h
// Defini��o da classe GradeBook em um arquivo main separado
#include <iostream>

using std::cout;
using std::endl;

#include <string> // A classe GradeBook utiliza a classe de string padr�o C++

using std::string;

// Defini��o da classe GradeBook
class GradeBook
{
	public:
		// O construtor inicializa courseName com a string fornecida como argumnento
		GradeBook(string name)
		{
			setCourseName(name); // chama a fun��o set para inicializar courseName
		} // Fim do construtor GradeBook
		
		// Fun��o para configurar o nome do curso
		void setCourseName(string name)
		{
			courseName = name; // Armazena o nome do curso no objeto
		} // Fim da fun��o getCourseName
		
		// Fun��o para obter o nome do curso
		string getCourseName()
		{
			return courseName; // Retorna courseName do objeto
		} // Fim da fun��o getCourseName
		
		// Exibe uma mensagem de boas-vindas para o usu�rio GradeBook
		void displayMesssage()
		{
			// chama getCourseName para obter o nome do curso
			cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			<< endl; 
		} // Fim da fun��o displayMessage
		
	private:
		string courseName; // Nome do curso para esse GradeBook
}; // Fim da classe GradeBook
