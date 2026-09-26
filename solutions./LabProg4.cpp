#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

bool stepen_2(int x) {
    return x > 0 && (x & (x - 1)) == 0;
}

int main() {
    array<int, 15> numbers{};
    cout << "Введите 15 чисел ";
    for (int i = 0; i < 15; ++i) {
        cin >> numbers[i];
    }

    static int num1[5];
    static int num2[5];
    static int num3[5];

    for (int i = 0; i < 5; ++i) {
        num1[i] = numbers[i];
        num2[i] = numbers[i + 5];
        num3[i] = numbers[i + 10];
    }

    int min1 = num1[0];
    int min2 = num2[0];
    int min3 = num3[0];

    for (int i = 1; i < 5; ++i) {
        if (num1[i] < min1) {
            min1 = num1[i];
        }
        if (num2[i] < min2) {
            min2 = num2[i];
        }
        if (num3[i] < min3) {
            min3 = num3[i];
        }
    }

    cout << "Минимальный элемент первой группы: " << min1 << "\n";
    cout << "Минимальный элемент второй группы: " << min2 << "\n";
    cout << "Минимальный элемент третьей группы: " << min3 << "\n";

    array<int, 15> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    cout << "Элементы массива в порядке возрастания: ";
    for (int value : sorted_numbers) {
        cout << value << " ";
    }
    cout << "\n";

    static int repeat_numbers[15];
    int repeat_count = 0;

    for (int i = 1; i < 14; ++i) {
        if (numbers[i] == numbers[i - 1] || numbers[i] == numbers[i + 1]) {
            bool already_added = false;
            for (int j = 0; j < repeat_count; ++j) {
                if (repeat_numbers[j] == numbers[i]) {
                    already_added = true;
                    break;
                }
            }
            if (!already_added) {
                repeat_numbers[repeat_count++] = numbers[i];
            }
        }
    }

    cout << "Количество чисел, которые повторяются " << repeat_count << "\n";

    int element_number = -1;
    for (int i = 14; i >= 0; --i) {
        if (stepen_2(numbers[i]) == false || (i < 14 && numbers[i] >= numbers[i + 1])) {
            break;
        }
        element_number = i + 1;
    }

    if (element_number != -1) {
        cout << "Номер числа, после которого беспрерывно идут степени двойки по возрастанию: " << element_number;
    } else {
        cout << "Нет непрерывной цепочки из степеней двойки, идущих по возрастанию";
    }

    return 0;
}