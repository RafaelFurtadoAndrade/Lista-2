#include <iostream>
#include <cmath>
using namespace std;
int main (){
	//Defini��o das vari�ves
	int a,b,z;
	// Solicit�o de n�meros para o usuario 
	cout<< "digite o valor do cateto oposto";
	cin >>a;
	cout<< "digite o valor do cateto adjacente";
	cin>>b;
	//C�lculo da hipotenusa
	z = sqrt (a*a + b*b);
	
	// Resultado
	cout<< "O resultado da hipotenusa e;" << z <<endl;
	
	
	
	return 0;
}
