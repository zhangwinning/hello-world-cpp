//
// Created by videojj on 2019/12/1.
//

#include <iostream>

using namespace std;

int fact(int val) {
    int ret = 1;
    while (val > 1) {
        ret *= val--;
    }
    return ret;
}

int main() {
    int j = fact(10);
    cout << "5 ! is " << j << endl;
    return 0;
}