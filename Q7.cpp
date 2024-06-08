#include <iostream>
using namespace std;

bool ehPrimo(int numero) {
    // Caso o n�mero seja menor ou igual a 1, n�o � primo
    if (numero <= 1) {
        return false;
    }

    // Percorre os poss�veis divisores do n�mero
    for (int i = 2; i * i <= numero; i++) {
        // Se o n�mero for divis�vel por algum n�mero diferente de 1 e ele mesmo, n�o � primo
        if (numero % i == 0) {
            return false;
        }
    }

    // Se o n�mero n�o foi divis�vel por nenhum n�mero diferente de 1 e ele mesmo, � primo
    return true;
}

int main() {
    int numero;

    // Solicita ao usu�rio que insira o n�mero
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    // Verifica se o n�mero � primo e exibe o resultado
    if (ehPrimo(numero)) {
        cout << numero << " e um numero primo." << endl;
    } else {
        cout << numero << " nao eh um numero primo." << endl;
    }

    return 0;
}
