#include <iostream>
#include <algorithm>
using namespace std;

bool st2(int x) {
    return x > 0 && (x & (x - 1)) == 0;
}

int main(){
    int a[15]; int x;
    int minel1 = 0; int minel2 = 0; int minel3 = 0;
    cout << "Введите 15 чисел:" << endl;
    for (int i = 0; i < 15; i++){
        cin >> x;
        a[i] = x;
    }
    int b[15];
    for (int i = 0; i < 15; i++){
        b[i] = a[i];
    }
    minel1 = x;
    minel2 = x;
    minel3 = x;
    for (int i = 0; i < 5; i++){
        if (a[i] < minel1){
            minel1 = a[i];
        }
    }
        for (int i = 5; i < 10; i++){
        if (a[i] < minel2){
            minel2 = a[i];
        }
    }
    for (int i = 10; i < 15; i++){
        if (a[i] < minel3){
            minel3 = a[i];
        }
    }
    cout << "Минимум первой пятерки: " << minel1 << endl;
    cout << "Минимум второй пятерки: " << minel2 << endl;
    cout << "Минимум третьей пятерки: " << minel3 << endl;
    sort(b, b+15);
    cout << "Элементы в порядке возрастания:";
    for (int i = 0; i < 15; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    int count_repeat = 0;
    int flag_new = 0;
    int flag_old = 1;
    if (b[0] == b[1]){
        count_repeat++;
    }
    for (int i = 2; i < 15; i++){
        if ((b[i] == b[i-1]) && (b[i] != b[i-2])){
            count_repeat++;
        }
    }
    cout << "Количество повторяющихся чисел: " << count_repeat << endl;

    int el_num = 0;
    for (int i = 14; i >= 0; --i) {
        if (st2(a[i]) == false || (i < 14 && a[i] >= a[i + 1])) {
            break;
        }
        el_num = i + 1;
    }

    if (el_num != -1) {
        cout << "Номер числа, после которого беспрерывно идут степени двойки по возрастанию: " << el_num;
    } else {
        cout << "Нет непрерывной цепочки из степеней двойки, идущих по возрастанию";
    }

}