#include <iostream>
using namespace std;

int main() { 
    // Definição das variáveis
    int a, b, z_soma,z_multi,z_sub,z_div;
    
    // Solicitação para o usuário inserir os valores
    cout << "Digite o valor de a: ";
    cin >> a;
    
    cout << "Digite o valor de b: ";
    cin >> b;
     
    // Soma,produto, diferença, e quociente dos dois produtos 
    z_soma=a+b;
    z_multi=a*b;
    z_sub=a-b;
    z_div=a/b;
     // Saída do resultado
    cout << "O resultado da soma de a + b é: " << z_soma << endl;
    cout << "O resultado da multiplicaçao de a*b é: "<<z_multi<< endl;
    cout << "O resultado da subtraçao de a -b é: "<<z_sub<< endl;
    cout << "O resultado da divisao de a/b é "<<z_div<< endl;
    return 0;
    
	}

