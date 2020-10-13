#include <iostream>  
#include <iomanip>
using  namespace std;

#include "Cilindro.cpp" 

int main(){
	Cilindro cilindro( 12, 23, 2.4, 5.7 );
	cilindro.imprime();  //m�todo da classe Cilindro
	
	cilindro.setX( 2 ); 	//m�todo da classe Ponto
	cilindro.setY( 2 );	 //m�todo da classe Ponto
	cilindro.alteraRaio( 4.25 ); //m�todo da classe Circulo2
	cilindro.ajusta_altura( 10 ); //m�todo da classe Cilindro
	cout <<endl<< "Nova localizacao e raio: "<<endl;
	cilindro.imprime();		 //m�todo da classe Cilindro
	cout << fixed << setprecision( 2 );
	cout<<endl;	
	cout <<"Diametro = " << cilindro.retornaDiametro()<<endl; //m�todo da Classe Circulo2
	cout <<"Comprimento = " << cilindro.retornaComp()<<endl; //m�todo da classe Circulo2
	cout <<"Area = " << cilindro.retornaArea()<<endl;  //m�todo da classe Cilindro
	cout <<"Volume = " << cilindro.retorna_volume()<<endl<<endl; //m�todo da classe Cilindro
	return 0;
}
