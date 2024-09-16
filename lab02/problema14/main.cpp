#include <iostream>
using namespace std;

int main()
{
    int matorg[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int mat90[5][5] = {
        {21,16,11,6,1},
        {22,17,12,7,2},
        {23,18,13,8,3},
        {24,19,14,9,4},
        {25,20,15,10,5}
    };
    int mat180[5][5]={
        {25,24,23,22,21},
        {20,19,18,17,16},
        {15,14,13,12,11},
        {10,9,8,7,6},
        {5,4,3,2,1}
    };
    int mat270[5][5] ={
        {5,10,15,20,25},
        {4,9,14,19,24},
        {3,8,13,18,23},
        {2,7,12,17,22},
        {1,6,11,16,21}
    };
    int* mov = &matorg[0][0];
    cout << "matriz original:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << *(mov + i * 5 + j) << " ";
        }
        cout << endl;
    }
    mov = &mat90[0][0];
    cout << "matriz rotada 90 grados:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << *(mov + i * 5 + j) << " ";
        }
        cout << endl;
    }
    mov = &mat180[0][0];
    cout << "matriz rotada 180 grados:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << *(mov + i * 5 + j) << " ";
        }
        cout << endl;
    }
    mov = &mat270[0][0];
    cout << "matriz rotada 270 grados:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << *(mov + i * 5 + j) << " ";
        }
        cout << endl;
    }
    return 0;
}
