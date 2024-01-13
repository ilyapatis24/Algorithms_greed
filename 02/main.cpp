#include <iostream>
using namespace std;
typedef unsigned long long ull;

ull* fibonacce(const int size) {
    ull* arrayFib = new ull[size + 1];
    arrayFib[0] = 0;
    arrayFib[1] = 1;
    
    for (int i = 2; i < size; i++)
    {
        arrayFib[i] = arrayFib[i - 1] + arrayFib[i - 2];
    }
    return arrayFib;
}

void clear_memory(ull* arr_ptr) {
  delete[] arr_ptr;
}

int main(int argc, char** argv) {
    system("chcp 1251");
    int size = 0;
    cout << "Введите индекс числа Фибоначчи: ";
    cin >> size;
    ull* arr_ptr = fibonacce(size);
    cout << "Числа Фибоначчи: ";
    for (int i = 0; i < size; ++i) {
        cout << arr_ptr[i] << " ";
    }
    clear_memory(arr_ptr);
    return 0;
}

// Алгоритмическая сложность: по времени О(n), по памяти О(n).