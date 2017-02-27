#include <iostream>
#include "ruleta.h"
#include "parser.h"
using namespace std;

void printData(Data d) {
    cout << "Num: " << d.num << ":" << endl;
    cout << "Es Impar: " << d.esImpar << endl;
    cout << "Color: " << d.color << endl;
    cout << "Docena: " << d.docena << " | Mitad: " << d.mitad
         << " | Fila: " << d.fila << endl;
    cout << "---------------" << endl;
}

int main() {
    Ruleta ruleta;
    Parser parser;
    for (int i = 0 ; i < 10; i++)
        printData(parser.genData(ruleta()));
    cout << endl;
}
