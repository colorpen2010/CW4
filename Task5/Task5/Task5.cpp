#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int first[5];
    int second[5];
    int result[10];
    int index = 0;
    cout << "Введіть 5 елементів першого масиву:" << endl;
    for (int i = 0; i < 5; i++){
        cin >> first[i];
    }
    cout << "Введіть 5 елементів другого масиву:" << endl;
    for (int i = 0; i < 5; i++){
        cin >> second[i];
    }
    for (int i = 0; i < 5; i++){
        if (first[i] > 0){
            result[index] = first[i];
            index++;
        }
        if (second[i] > 0){
            result[index] = second[i];
            index++;
        }
    }
    for (int i = 0; i < 5; i++){
        if (first[i] == 0){
            result[index] = first[i];
            index++;
        }
        if (second[i] == 0){
            result[index] = second[i];
            index++;
        }
    }
    for (int i = 0; i < 5; i++){
        if (first[i] < 0){
            result[index] = first[i];
            index++;
        }
        if (second[i] < 0){
            result[index] = second[i];
            index++;
        }
    }
    cout << "Результат:" << endl;
    for (int i = 0; i < 10; i++){
        cout << result[i] << " ";
    }
    return 0;
}