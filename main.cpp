// Hometask Рузанова Елизавета
// Сделать заголовочный файл с функциями по разделению массива на 2 части.

#include "Splitting the array.h"

using namespace std;

int main() {


    const int SIZE = 10;
    const int SIZE_2 = SIZE / 2;
    int arr_1[SIZE_2];
    int arr_2[SIZE_2];

    int arraySource[SIZE];
    InputArray(arraySource, SIZE);
    PrintArray(arraySource, SIZE);

    SplitArray1(arraySource,SIZE_2, arr_1);
    SplitArray2(arraySource,  SIZE_2, arr_2);

    PrintArray(arr_1, SIZE_2);
    PrintArray(arr_2, SIZE_2);





    return 0;
}