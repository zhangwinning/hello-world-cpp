//
// Created by videojj on 2019/12/1.
//

/**
 * 6.1.1 局部对象
 * 1.自动对象
 * 对于普通局部变量对应的对象来说，当函数的控制路径经过变量定义语句时创建该对象，当到达定义所在块末尾时销毁它。
 * 我们把只存在块执行期间的对象称之为 自动对象。
 * 2.局部静态对象。
 * 某些时候，有必要令局部对象的生命周期贯穿函数调用及之后的时间，可以把局部变量定义成 static 类型从而获得这样的对象。
 * 静态局部对象在程序的执行路径第一次经过对象定义语句时初始化，而且知道程序终止时才销毁，在此期间即使对象所在的函数结束执行也
 * 不会对它有影响。
 */
#include <iostream>

using namespace std;

// size_t 是 cstddef 头文件中定义的一种与机器实现有关的无符号整数类型，它的空间足够大，能够表示任意数组的的大小。
size_t count_calls() {
    static size_t ctr = 0;
    return ++ctr;
}

double myADD(double val1, double val2) {
    double result = val1 + val2;
    static unsigned iCnt = 0;
    ++iCnt;
    cout << "该函数累计执行了: " << iCnt << " 次" << endl;
    return result;
}

unsigned myCnt() {
    static unsigned iCnt = -1;
    ++iCnt;
    return  iCnt;
}

int main() {
//    for (size_t i = 0; i != 10; ++i) {
//        cout << count_calls() << endl;
//    }

//    double num1, num2;
//    cout << "请输入两个数值: ";
//    while (cin >> num1 >> num2) {
//        double result = myADD(num1, num2);
//        cout << num1 << " 与 " << num2 << "的求和结果是 :"
//             << result << endl;
//    }
    cout << "请输入任意字符后按回车键继续: " << endl;
    char ch;
    while (cin >> ch) {
        cout << "函数myCnt()的执行次数是: " << myCnt() << endl;
    }
    return 0;
}