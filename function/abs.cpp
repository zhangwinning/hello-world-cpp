//
// Created by videojj on 2019/12/1.
//

#include <iostream>
#include <cmath>

using namespace std;

double MyABS(double val) {
    if (val < 0) {
        return val * -1;
    } else {
        return val;
    }
}

double MyABS2(double val) {
    return abs(val);
}

int main() {
    double num;
    cout << "请输入一个数: ";
    cin >> num;
    cout << num << "的绝对值是: " << MyABS(num) << endl;
    cout << num << "的绝对值是 : " << MyABS2((num)) << endl;
}