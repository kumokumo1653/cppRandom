#include "Random.hpp"
#include <iostream>
using namespace std;
int main(void){
    Rand::Random rand;
    cout << rand.RandInt(0,4) << endl;
    cout << rand.RandBool(0.3) << endl;
    cout << rand.RandBool() << endl;
    cout << rand.RandDiscrete({1,10,100}) << endl;
    return 0;
}