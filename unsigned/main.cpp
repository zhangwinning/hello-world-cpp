//
// Created by videojj on 2019/11/30.
//

//#include "main.h"
#include "iostream"

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int ival = 42;
    int *p = &ival;
    std::cout << p << "\n" << *p << std::endl;

//    const 限定词
    const int bufSize = 512;
    std::cout << bufSize << std::endl;

    return 0;
}