#include <iostream>
#include <cmath>
using namespace std;
int main (){
	//Definição das variáves
	int a,b,z;
	// Solicitão de números para o usuario 
	cout<< "digite o valor do cateto oposto";
	cin >>a;
	cout<< "digite o valor do cateto adjacente";
	cin>>b;
	//Cálculo da hipotenusa
	z = sqrt (a*a + b*b);
	
	// Resultado
	cout<< "O resultado da hipotenusa e;" << z <<endl;
	
	
	
	return 0;
}
