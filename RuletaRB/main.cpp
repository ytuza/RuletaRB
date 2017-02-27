#include <iostream>
#include "ruleta.h"
using namespace std;

int main() {
    Ruleta ruleta;
    for (int i = 0 ; i < 10; i++)
        cout << ruleta() << " ";
    cout << endl;
}
