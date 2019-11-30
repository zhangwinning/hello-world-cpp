//
// Created by videojj on 2019/11/30.
//

#include <iostream>

int main() {
//    std::cout << "Enter two numbers:" << std::endl;
//    int v1 = 0, v2 = 0;
//    std::cin >> v1 >> v2;
//    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
//    return 0;
//    2、while 语句
//    int sum = 0, val = 1;
//    while (val <= 10) {
//        sum += val;
//        ++val;
//    }
//    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
//    return 0;
//    3、读取数量不定的输入数据
    int sum = 0, value = 0;

    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is:" << sum << std::endl;
    return  0;
}