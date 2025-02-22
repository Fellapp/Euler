#include <iostream>
using namespace std;

long div(long init = 20) {
    while(true) {
        bool is_found = true;
        for(short i = 1; i < 21; i++) {
            if(init % i != 0) {
                is_found = false;
                break;
            }
        }
        if(is_found) {
            return init;
        }
        init++;
    }
}

int main() {
    cout << div();
    return 0;
}