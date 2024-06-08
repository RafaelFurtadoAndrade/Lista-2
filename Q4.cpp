#include <iostream>
#include <cmath>
using namespace std;

void drawSquare(int size) {
    cout << "Quadrado:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void drawCircle(int radius) {
    cout << "Círculo:" << endl;
    int centerX = radius;
    int centerY = radius;

    for (int i = 0; i <= 2 * radius; ++i) {
        for (int j = 0; j <= 2 * radius; ++j) {
            double distance = sqrt((i - centerY) * (i - centerY) + (j - centerX) * (j - centerX));

            if (abs(distance - radius) < 0.5)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void drawArrow(int size) {
    cout << "Seta:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size / 2 || j == size / 2 || i == j || i + j == size - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void drawDiamond(int size) {
    cout << "Losango:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i + j >= size / 2 && i + j <= size + size / 2 - 1 && i - j <= size / 2 && j - i <= size / 2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Digite o tamanho dos desenhos: ";
    cin >> size;

    drawSquare(size);
    drawCircle(size / 2);
    drawArrow(size);
    drawDiamond(size);

    return 0;
}

