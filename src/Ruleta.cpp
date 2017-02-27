#include "Ruleta.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
Ruleta::Ruleta()
{

}

Ruleta::num(void){
    srand(time(NULL));
    int a = rand()% 37;
    cout << a;
    jugadas++;
    return a;
}

