//Hometask Рузанова Елизавета
// 1. Сделать заголовочный файл с некоторыми математическими функциями.

#include <iostream>
#include "functions.h"

using namespace std;


int main() {
    int size;
    cout << "Enter the size of the array - ";
    cin >> size;
    int arr[size];

    RandomArray(arr, size, 0, 10);
    PrintArray(arr,size, '|' );

    int max= FindMax(arr,size);
    cout << "Max number - " << max << endl;
    int min = FindMin(arr, size);
    cout << "Min number - " << min << endl;



    return 0;
}
