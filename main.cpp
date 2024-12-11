#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main() {
    // 1.
    int n;
    cout << "Введите количество чисел в последовательности: ";
    cin >> n;

    double num, product = 1.0, minnegative = numeric_limits<double>::max();
    int minindex = -1;
    bool lol = false;

    for (int i = 1; i <= n; ++i) {
        cout << "Введите число " << i << ": ";
        cin >> num;

        if (num < 0 && (int)num != num > 1e-9) // Проверяем дробную часть
        { 
            product *= num;
            lol = true;

            if (num < minnegative) {
                minnegative = num;
                minindex = i;
            }
        }
    }

    if (lol) {
        cout << "Произведение отрицательных чисел с ненулевой дробной частью: " << product << "\n";
        cout << "Наименьшее такое число: " << minnegative << ", его номер: " << minindex << "\n";
    } else {
        cout << "Отрицательных чисел с ненулевой дробной частью нет.\n";
    }
    // 2.
    long long N;
    cout << "Введите натуральное число N (N < 10^9): ";
    cin >> N;

    if (N <= 0) {
        cout << "Число должно быть натуральным.\n";
        return 1;
    }

    int mindigit = 9; // Наименьшая цифра в числе

    while (N > 0) {
        int digit = N % 10; // Берем последнюю цифру
        if (digit < mindigit) {
            mindigit = digit;
        }
        N /= 10; // Убираем последнюю цифру
    }

    cout << "Наименьшая цифра числа: " << mindigit << "\n";

    return 0;
}