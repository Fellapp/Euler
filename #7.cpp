#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> primeNumberList(int value_on_place = 10001) {
    vector<int> primes;
    int init = 2;
    while(primes.size() < value_on_place) {
        bool isPrime = true;

        for(int i = 2; i <= sqrt(init); i++) {
            if(init % i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            primes.push_back(init);
        }
        init++;
    }
    return primes;
}

int main() {
    cout << primeNumberList().back();
    return 0;
}