// Demonstra��o da possibilidade de atribui��o de objetos de uma classe,
// a partir do uso da atribui��o default de membros.
   #include <iostream>

   using namespace std;

   class Data {

	public:
		Data( int = 1, int = 1, int = 2020 ); // construtor default
		void imprime();
	private:
		int dia; 
		int mes;
		int ano;
   }; 

   // construtor Data sem verifica��o de faixa
	Data::Data( int d, int m, int a ) {
		dia = d; 
		mes = m;
		ano = a;
	}

	// impress�o de Data no formato dd/mm/aa
	void Data::imprime() 
	{ 
		cout << dia << "/" << mes << "/" << ano; 
	}
	
	int main() {
	Data data1( 29, 9, 2020 );
	Data data2;  // data2 default: 1/1/2020	// impress�o de data1 e data2
	cout << "Data 1 = ";
	data1.imprime();
	cout <<endl<< "Data 2 = ";
	data2.imprime();
	data2 = data1;   // atribui��o default de membro
	cout << endl<< "Apos a atribuicao default de membro, Data 2 = ";
	data2.imprime();
	cout << endl;
	return 0;
      }