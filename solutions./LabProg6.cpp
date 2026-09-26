#include <iostream>
using namespace std;

int main(){
    double a, b, c;
    int xn; int xk; int dx;
    cout << "Введите значение а, b, c: \n";
    cin >> a >> b >> c;
    int ac = a; int bc = b; int cc = c;
    cout << "Введите значение начала, конца и шаг: \n";
    cin >> xn >> xk >> dx;
    cout << " Х   F(x)" << "\n";
    for (int i = xn; i<=xk; i+=dx){
        if (((ac | bc) && (ac | cc)) != 0){
            if (i < 0 && b != 0){
                cout << i << " " << (a*(i*i) + b) << "\n";
            }
            else if (i > 0 && b == 0){
                cout << i << " " << ((i-a)/(i-c)) << "\n";
            }
            else{
                cout << i << " " << (i / c) << "\n";
            }
        }
        else{
            if (i < 0 && b != 0){
                cout << i << " " << int (a*(i*i) + b) << "\n";
            }
            else if (i > 0 && b == 0){
                cout << i << " " << int ((i-a)/(i-c)) << "\n";
            }
            else{
                cout << i << " " << int (i / c) << "\n";
            }
        }
    }
}