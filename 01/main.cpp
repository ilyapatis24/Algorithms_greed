#include <iostream>
using namespace std;
typedef unsigned long long ull;

ull fibonacce(int index) {
    if (index == 0) return 0;
    if (index == 1 || index == 2) return 1;

    return fibonacce(index - 1) + fibonacce(index - 2);
}

int main(int argc, char** argv) {
    system("chcp 1251");
    int number = 0;
    cout << "Введите число: ";
    cin >> number;
    cout << "Числа Фибоначчи: ";
    for (int i = 0; i < number; ++i) {
        cout << fibonacce(i) << " ";
    }
    return 0;
}