#include <iostream>
using namespace std;

long sumOfSquares(int init = 100) {
    long sum = 0;
    for(int i = 1; i <= init; i++) {
        sum += i * i;
    }
    return sum;
} 

long squaresOfSum(int init = 100) {
    long sum = 0;
    for(int i = 1; i <= init; i++) {
        sum += i;
    }
    return sum * sum;
} 

int main() {
    cout << squaresOfSum() - sumOfSquares();
    return 0;
}