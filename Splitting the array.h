#pragma once
#include <iostream>
using namespace std;


void InputArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Enter " << i + 1 << " the number : ";
        cin >> arr[i];
    }
}
void PrintArray(int arr[], int size){
    cout << "{ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

void SplitArray1(int arrS[], int size, int arr_D[]){
    for(int i =0; i<size; ++i) {
        arr_D[i] = arrS[i];
    }
}


void SplitArray2(int arrS[], int size, int arr_D[]){
    for (int i = size, j=0; i<size; i++, j++) {
        arr_D[j] = arrS[i];
    }

}
