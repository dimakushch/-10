#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
using namespace std;

//void Arr(int arr[], int size) {
//    for (int i = 0; i < size; ++i) {
//        int j = rand() % size;
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//    }
//}
//
//bool comp(int a, int b) {
//    return a > b;
//}
//
//void proces(int arr[], int size) {
//    Arr(arr, size);
//
//    int ran = rand() % 20 + 1;
//    cout << "Згенеровано випадкове число: " << ran << endl;
//
//    int pos = -1;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] == ran) {
//            pos = i;
//            break;
//        }
//    }
//    cout << "Позиція випадкового числа " << ran << " в масиві: " << pos << endl;
//
//    sort(arr, arr + pos, comp);
//    sort(arr + pos + 1, arr + size);
//}

//int D1(int arr[], int size) {
//    int max = arr[0];
//    for (int i = 1; i < size; ++i) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//int D2(int arr[][3], int rows, int cols) {
//    int max = arr[0][0];
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (arr[i][j] > max) {
//                max = arr[i][j];
//            }
//        }
//    }
//    return max;
//}
//
//int D3(int arr[][3][3], int depth, int rows, int cols) {
//    int max = arr[0][0][0];
//    for (int i = 0; i < depth; ++i) {
//        for (int j = 0; j < rows; ++j) {
//            for (int k = 0; k < cols; ++k) {
//                if (arr[i][j][k] > max) {
//                    max = arr[i][j][k];
//                }
//            }
//        }
//    }
//    return max;
//}

//int Max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//int Max(int a, int b, int c) {
//    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//}

//const int ARRAY = 100;
//const int SIZE = 10;
//
//void Arr(int arr[], int size) {
//    for (int i = 0; i < size; ++i) {
//        arr[i] = rand() % 100;
//    }
//}
//
//int Min(int arr[], int start) {
//    if (start > ARRAY - SIZE) {
//
//        return -1;
//    }
//    int minSum = 0;
//    for (int i = start; i < start + SIZE; ++i) {
//        minSum += arr[i];
//    }
//    int MinSum = Min(arr, start + 1);
//
//    if (MinSum == -1 || minSum < arr[MinSum]) {
//        return start;
//    }
//    else {
//        return MinSum;
//    }
//}

void merge(int res[], int& ressize,
    const int arr1[], int size1,
    const int arr2[], int size2,
    const int arr3[], int size3) {
    for (int i = 0; i < size1; ++i) {
        res[ressize++] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        res[ressize++] = arr2[i];
    }
    for (int i = 0; i < size3; ++i) {
        res[ressize++] = arr3[i];
    }
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    srand(time(NULL));

    //1
    /*const int size = 20;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    proces(arr, size);

    cout << "Відсортований масив: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    //2

    /*int arrD1[] = { 1, 5, 3, 9, 2 };
    int sizeD1 = sizeof(arrD1) / sizeof(arrD1[0]);
    cout << "Максимальне значення в D1 масиві: " << D1(arrD1, sizeD1) << endl;

    int arrD2[2][3] = { {1, 5, 3}, {9, 2, 8} };
    int rowsD2 = 2;
    int colsD2 = 3;
    cout << "Максимальне значення у D2 масиві: " << D2(arrD2, rowsD2, colsD2) << endl;

    int array3D[2][3][3] = {
        {{1, 5, 3}, {9, 2, 8}, {7, 4, 6}},
        {{0, 3, 7}, {8, 5, 9}, {2, 4, 1}}
    };
    int depthD3 = 2;
    int rowsD3 = 3;
    int colsD3 = 3;
    cout << "Максимальне значення у D3 масиві: " << D3(array3D, depthD3, rowsD3, colsD3) << endl;*/

    //3

    /*int x = 5, y = 10;
    cout << "Максимум від " << x << " і " << y << " це: " << Max(x, y) << endl;

    int p = 8, q = 3, r = 11;
    cout << "Максимум від " << p << ", " << q << " і " << r << " це: " << Max(p, q, r) << endl;*/

    //4

    /*int arr[ARRAY];
    Arr(arr, ARRAY);
    int min = Min(arr, 0);
    cout << "Позиція мінімальної суми послідовності розміру " << SIZE << ": " << min << endl;*/

    //5

    int arr1[] = { 1, 2, 3 };
    int arr2[] = { 4, 5, 6 };
    int arr3[] = { 7, 8, 9 };

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    int mer = size1 + size2 + size3;
    int merged[mer];
    int ressize = 0;

    merge(merged, ressize, arr1, size1, arr2, size2, arr3, size3);

    cout << "Об'єднаний масив: ";
    for (int i = 0; i < ressize; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;


    return 0;
}