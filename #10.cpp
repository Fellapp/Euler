#include <iostream>
#include <cmath>
using namespace std;
 
long long sumOfPrimes(int limit = 2000000) {
    long long currentSum = 0; 

    for (int i = 2; i < limit; i++) {
        bool isPrime = true;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            currentSum += i;
        }
    }
    return currentSum;
}

int main() {
    cout << sumOfPrimes();
    return 0;
}