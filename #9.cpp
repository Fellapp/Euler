#include <iostream>
using namespace std;

int task9() {
    int numberEqual = 1000;
    for (int a = 1; a < numberEqual / 2; a++) {
        for (int b = 1 + a; b < numberEqual / 2; b++) {
            if ((500000 - 1000 * (a + b) + a * b) == 0) {
                int c = 1000 - a - b;
                if (a * a + b * b == c * c) {
                    return a * b * c;
                }
            }
        }    
    }
    return 1;
}

int main() {
    cout << task9();
    return 0;
}