#ifndef RULETA_H
#define RULETA_H

#include <random>
#include <chrono>
using namespace std;

class Ruleta {
private:
    long long int seed;
    mt19937 gen;
    uniform_int_distribution<int> uny;
    
public:
    Ruleta() {
	seed = chrono::system_clock::now().time_since_epoch().count();
	gen = mt19937(seed);
	uny = uniform_int_distribution<int>(0,36);
    }
    
    int operator()() {
	return uny(gen);
    }
};

#endif // RULETA_H
