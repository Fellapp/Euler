#include <iostream>
using namespace std;

long long int largest_prime_factor(long long int n = 600851475143) {
    long long int largest = 0;
    
    while (n % 2 == 0) {
        largest = 2;
        n = n / 2;
    }
    
    for (long long int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }
    
    if (n > 2)
        largest = n;
        
    return largest;
}

int main() {
    cout << largest_prime_factor();
    return 0;
}