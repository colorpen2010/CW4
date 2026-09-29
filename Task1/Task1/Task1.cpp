#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    double profit[12];
    double sum = 0;
    double maxProfit;
    double minProfit;
    int maxMonth = 0;
    int minMonth = 0;
    for (int i = 0; i < 12; i++){
        cout << "Введіть прибуток за " << i + 1 << " місяць: ";
        cin >> profit[i];
        sum += profit[i];
    }
    maxProfit = profit[0];
    minProfit = profit[0];
    for (int i = 1; i < 12; i++){
        if (profit[i] > maxProfit){
            maxProfit = profit[i];
            maxMonth = i;
        }
        if (profit[i] < minProfit){
            minProfit = profit[i];
            minMonth = i;
        }
    }
    cout << "\nЗагальний прибуток: " << sum << endl;
    cout << "Максимальний прибуток: " << maxProfit << endl;
    cout << "Місяць з максимальним прибутком: " << maxMonth + 1 << endl;
    cout << "Мінімальний прибуток: " << minProfit << endl;
    cout << "Місяць з мінімальним прибутком: " << minMonth + 1 << endl;
    cout << "Середній прибуток: " << sum / 12 << endl;
    return 0;
}