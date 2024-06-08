#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    float distancia, valorTotal, custoMedioPorKm;

    // Constantes para os valores dos custos por quilômetro
    const float custoAte50Km = 1.75;
    const float custoAte100Km = 1.65;
    const float custoAcima100Km = 1.5;

    // Solicita ao usuário a distância em quilômetros
    cout << "Digite a distancia em quilometros: ";
    cin >> distancia;

    // Calcula o valor total a pagar com base na distância
    if (distancia <= 50) {
        valorTotal = distancia * custoAte50Km;
    } else if (distancia <= 100) {
        valorTotal = 50 * custoAte50Km + (distancia - 50) * custoAte100Km;
    } else {
        valorTotal = 50 * custoAte50Km + 50 * custoAte100Km + (distancia - 100) * custoAcima100Km;
    }

    // Calcula o custo médio por quilômetro
    custoMedioPorKm = valorTotal / distancia;

    // Exibe o valor total a pagar e o custo médio por quilômetro
    cout << "O valor total a pagar e: " << valorTotal << " reais" << endl;
    cout << "O custo medio por quilometro e: " << custoMedioPorKm << " reais por quilometro" << endl;

    return 0;
}
