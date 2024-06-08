#include <iostream>
using namespace std;
int main (){
	//Definição das variáves
	int a,b;
	// Solicitão de números para o usuario 
	cout<< "digite o primeiro numero";
	cin >>a;
	cout<< "digite o segundo numero";
	cin>>b;
	// Leitura dos números múltiplos 
	 if (b != 0 && a % b == 0) {
        cout << a << " e multiplo de " << b << endl;
    } else {
        cout << a << " nao e multiplo de " << b << endl;
    }
	
	
	return 0;
}
