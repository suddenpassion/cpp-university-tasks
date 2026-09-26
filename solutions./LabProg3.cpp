#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int x) {
    if (x == 1){
        return false;
    }
    if (x == 2){
        return true;
    }
    for (int i = 2; i <= (sqrt(x)+1); i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int x;
    int line_number = 0;
    cout <<"Введите число: ";
    cin >> x;
    for (int i = 1; i < x; i++){
        if (is_prime(i)==true){
            int new_line_number = ((i - 1) / 10);
            if (line_number != new_line_number){
                cout << "\n";
                line_number = new_line_number;
            }
            cout << i << " ";
        }
    }
    return 0;
}