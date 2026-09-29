#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int numbers[10];
    cout << "Введіть 10 чисел:" << endl;
    for (int i = 0; i < 10; i++){
        cin >> numbers[i];
    }
    cout << "Масив у зворотному порядку:" << endl;
    for (int i = 9; i >= 0; i--){
        cout << numbers[i] << " ";
    }
    return 0;
}