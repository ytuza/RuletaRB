#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main()
{
    int i =0;
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<int> uny(0,35);

    for(i;i<10;i++){
        cout << uny(gen) << endl;
    }
    return 0;
}
