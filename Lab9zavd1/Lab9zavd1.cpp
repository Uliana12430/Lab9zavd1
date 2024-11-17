#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int start = 5, end = 50;
    long long sum = 0;

    for (int i = start; i <= end; ++i) {
        sum += i * i * i; // Додаємо куб числа
    }

    cout << "Сума кубів всіх натуральних чисел від " << start << " до " << end << " дорівнює " << sum << "." << endl;

    return 0;
}
