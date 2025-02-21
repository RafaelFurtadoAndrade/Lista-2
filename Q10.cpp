int main() {
    // Declara��o da string e das vari�veis para contar as vogais
    string entrada;
    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;

    // Solicita ao usu�rio que digite uma string com 5 caracteres
    cout << "Digite uma string com 5 caracteres: ";
    getline(cin, entrada);

    // Verifica se a entrada tem o tamanho correto
    if (entrada.length() != 5) {
        cout << "A string fornecida n�o tem 5 caracteres. Por favor, tente novamente." << endl;
        return 1; // Encerra o programa com um c�digo de erro
    }

    // Contagem das vogais na string
    for (char letra : entrada) {
        switch (letra) {
            case 'a':
                contadorA++;
                break;
            case 'e':
                contadorE++;
                break;
            case 'i':
                contadorI++;
                break;
            case 'o':
                contadorO++;
                break;
            case 'u':
                contadorU++;
                break;
        }
    }

    // Exibe a contagem de vogais
    cout << "Vogal 'a' aparece " << contadorA << " vezes." << endl;
    cout << "Vogal 'e' aparece " << contadorE << " vezes." << endl;
    cout << "Vogal 'i' aparece " << contadorI << " vezes." << endl;
    cout << "Vogal 'o' aparece " << contadorO << " vezes." << endl;
    cout << "Vogal 'u' aparece " << contadorU << " vezes." << endl;

    // Criptografando a string
    for (char& letra : entrada) {
        switch (letra) {
            case 'a':
                letra = 'i';
                break;
            case 'e':
                letra = 'o';
                break;
            case 'i':
                letra = 'u';
                break;
            // N�o � necess�rio tratar 'o' e 'u', pois n�o s�o modificados
        }
    }

    // Exibe a nova string criptografada
    cout << "String criptografada: " << entrada << endl;

    return 0;
}
