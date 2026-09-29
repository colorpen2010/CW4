#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int numbers[9] = { 0, -11, 0, 12, 54, 0, 0, -40, 11 };
    int index = 0;
    cout << "Масив до стискання:" << endl;
    for (int i = 0; i < 9; i++){
        cout << numbers[i] << " ";
    }
    for (int i = 0; i < 9; i++){
        if (numbers[i] != 0){
            numbers[index] = numbers[i];
            index++;
        }
    }
    for (int i = index; i < 9; i++){
        numbers[i] = -1;
    }
    cout << "\nМасив після стискання:" << endl;
    for (int i = 0; i < 9; i++){
        cout << numbers[i] << " ";
    }
    return 0;
}