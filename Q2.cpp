#include <iostream>
using namespace std;

int main() { 
    // Defini��o das vari�veis
    int a, b, z_soma,z_multi,z_sub,z_div;
    
    // Solicita��o para o usu�rio inserir os valores
    cout << "Digite o valor de a: ";
    cin >> a;
    
    cout << "Digite o valor de b: ";
    cin >> b;
     
    // Soma,produto, diferen�a, e quociente dos dois produtos 
    z_soma=a+b;
    z_multi=a*b;
    z_sub=a-b;
    z_div=a/b;
     // Sa�da do resultado
    cout << "O resultado da soma de a + b �: " << z_soma << endl;
    cout << "O resultado da multiplica�ao de a*b �: "<<z_multi<< endl;
    cout << "O resultado da subtra�ao de a -b �: "<<z_sub<< endl;
    cout << "O resultado da divisao de a/b � "<<z_div<< endl;
    return 0;
    
	}

