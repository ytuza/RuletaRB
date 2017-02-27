#ifndef PARSER_H
#define PARSER_H

#include <deque>
using namespace std;

struct Data {
    int num;
    char color;
    bool esImpar;
    int docena;
    int fila;
    int mitad;
    // TODO: Agregar zonas especiales ???
    
    Data(int num, char color, bool esImpar, int docena, int fila, int mitad) {
        this->num = num;
        this->color = color;
        this->esImpar = esImpar;
        this->docena = docena;
        this->fila = fila;
        this->mitad = mitad;
    }
};

class Parser {
private:
    
public:
    Data genData(int n);
    // TODO: leer archivo, leer vector / array, ...
    
};



// Color - par/Impar - 1/2/3 docena - 1/2/3 fila - menor o mayor a 16

#endif //PARSER_H
