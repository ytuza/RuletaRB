#include "parser.h"

Data Parser::genData(int n)  {
    if (n == 0)
        return Data(0, 'v', 0, 0, 0, 0);
    
    char color;
    bool esImpar;
    int docena, fila, mitad;     
    
    esImpar = n % 2;
    
    if (n <= 12) {
        docena = 1;
        if (n < 11)
            color = esImpar ? 'r' : 'n';
        else 
            color = esImpar ? 'n' : 'r';
    }
    else if (n <= 24) {
        docena = 2;
        if (n < 19)
            color = esImpar ? 'n' : 'r';
        else
            color = esImpar ? 'r' : 'n';
    }
    else {
        docena = 3;
        if (n < 29)
            color = esImpar ? 'r' : 'n';
        else
            color = esImpar ? 'n' : 'r';
    }
    
    mitad = n <= 18 ? 1 : 2;
    
    if (n % 3 == 1)
        fila = 1;
    else if (n % 3 == 2)
        fila = 2;
    else
        fila = 3;
    
    return Data(n, color, esImpar, docena, fila, mitad);
}
