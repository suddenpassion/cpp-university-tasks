#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    double sum_digits = 0.0;
    int count_digits = 0;
    int max_digit = -100000000;
    int min_digit = 1000000000;
    int count_Multiples5 = 0;
    int count_stepen2 = 0;
    vector<int> numbers;

    cout << "Введите числа:" << endl;
    while (true) {
        cin >> x;
        if (x == 0) {
            break;
        }

        numbers.push_back(x);
        sum_digits += x;
        count_digits++;

        if (x > max_digit) {
            max_digit = x;
        }
        if (x < min_digit) {
            min_digit = x;
        }
        if (x % 5 == 0) {
            count_Multiples5++;
        }
        if (x > 0 && (x & (x - 1)) == 0) {
            count_stepen2++;
        }
    }

    int count_exceed = 0;
    for (int i = 2; i < numbers.size(); i++) {
        if (numbers[i] > numbers[i - 1] + numbers[i - 2]) { 
            count_exceed++;
        }
    }
    double average; 
    average = sum_digits / count_digits;
    cout << "Среднее арифметическое: " << average << endl;
    cout << "Разность максимального и минимального числа: " << max_digit - min_digit << endl;
    cout << "Количество кратных пяти: " << count_Multiples5 << endl;
    cout << "Количество степеней двойки: " << count_stepen2 << endl;
    cout << "Количество чисел, превышающих сумму двух предыдущих: " << count_exceed << endl;

    return 0;
}