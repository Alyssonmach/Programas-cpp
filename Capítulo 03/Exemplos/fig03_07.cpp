// Figura 3.7: fig03_07.cpp
// Instanciando m�ltiplos objetos da classe GradeBook e utilizando
// o construtor GradeBook para especificar o nome do curso
// quando cada objeto GradeBook � criado
#include <iostream>

using std::cout;
using std::endl;

#include <string> // O programa utiliza classe de string padr�o C++

using std::string;

// Defini��o da classe GradeBook
class GradeBook
{
	public:
		// O construtor inicializa courseName com a string fornecida como argumento
		GradeBook(string name)
		{
			setCourseName(name); // Chama a fun��o set para inicializar courseName
		} // Fim do construtor GradeBook
		
		// Fun��o para configurar o nome do curso
		void setCourseName(string name)
		{
			courseName = name; // Armazena o nome do curso no objeto
		} // Fim da fun��o setCourseName
		
		// Fun��o para obter o nome do curso
		string getCourseName()
		{
			return courseName; // Retorna courseName do objeto
		} // Fim da fun��o getCourseName
		
		// Exibe uma mensage de boas vindas para o usu�rio do GradeBook
		void displayMessage()
		{
			// Chama getCourseName para obter courseName
			cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			<< endl;
		} // Fim da fun��o displayMessage
		
		private:
			string courseName; // Nome do curso para esse GradeBook
};  // Fim da classe GradeBook

// A fun��o main inicia a execu��o do programa
int main()
{
	// cria dois objetos GradeBook
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");
	
	// Exibe o valor inicial de courseName para cada objeto GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName();
	cout << "\ngradeBook2 created for course: " << gradeBook2.getCourseName();
	cout << endl; // Imprime uma linha em branco
	   
	return 0; // Indica termina��o bem-sucedida
} // Fim da fun��o main

