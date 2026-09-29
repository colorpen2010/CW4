#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    double sides[5];
    double perimeter = 0;
    cout << "Введіть довжину 5 сторін п'ятикутника:" << endl;
    for (int i = 0; i < 5; i++){
        cin >> sides[i];
        perimeter += sides[i];
    }
    cout << "Периметр п'ятикутника: " << perimeter;
    return 0;
}