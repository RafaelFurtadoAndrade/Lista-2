#include <iostream>
using namespace std;
int main (){
	//Defini��o das vari�ves
	int a,b;
	// Solicit�o de n�meros para o usuario 
	cout<< "digite o primeiro numero";
	cin >>a;
	cout<< "digite o segundo numero";
	cin>>b;
	// Leitura dos n�meros m�ltiplos 
	 if (b != 0 && a % b == 0) {
        cout << a << " e multiplo de " << b << endl;
    } else {
        cout << a << " nao e multiplo de " << b << endl;
    }
	
	
	return 0;
}
