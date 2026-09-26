#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> numbers1;
vector<int> numbers2;
int main(){
    int x;
    cout << "Заполните первый массив пятью числами: ";
    for (int i = 0; i<5; i++){
        cin >> x;
        numbers1.push_back(x);
    }
    cout << "Заполните второй массив пятью числами: ";
    for (int i = 0; i<5; i++){
        cin >> x;
        numbers2.push_back(x);
    }
    for (int i : numbers1){
        if (i < 0){
            numbers2.push_back(i);
        }
    }
    for (int i : numbers2){
        if (i > 0){
            numbers1.push_back(i);
        }
    }
    numbers1.erase(remove_if(numbers1.begin(), numbers1.end(), [](int x) {return x < 0;}), numbers1.end());
    numbers2.erase(remove_if(numbers2.begin(), numbers2.end(), [](int x) {return x > 0;}), numbers2.end());

    if (numbers1.size() < 5){
        numbers1.resize(5, 0);
    }
    if (numbers2.size() < 5){
        numbers2.resize(5, 0);
    }
    cout << "Положительные числа: ";
    for (int i : numbers1){
        cout << i << " ";
    }
    cout << "\n";
    cout << "Отрицательные числа: ";
    for (int i : numbers2){
        cout << i << " ";
    }    
}