#include <iostream>
using namespace std;

bool ehPrimo(int numero) {
    // Caso o número seja menor ou igual a 1, não é primo
    if (numero <= 1) {
        return false;
    }

    // Percorre os possíveis divisores do número
    for (int i = 2; i * i <= numero; i++) {
        // Se o número for divisível por algum número diferente de 1 e ele mesmo, não é primo
        if (numero % i == 0) {
            return false;
        }
    }

    // Se o número não foi divisível por nenhum número diferente de 1 e ele mesmo, é primo
    return true;
}

int main() {
    int numero;

    // Solicita ao usuário que insira o número
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    // Verifica se o número é primo e exibe o resultado
    if (ehPrimo(numero)) {
        cout << numero << " e um numero primo." << endl;
    } else {
        cout << numero << " nao eh um numero primo." << endl;
    }

    return 0;
}
