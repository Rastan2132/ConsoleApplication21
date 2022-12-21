#include "Header.h"



void add(int* arr[], int size_1, int size_2)
{
    for (int i = 0; i < size_1; i++)
    {
        arr[i] = new int[size_2];
        for (int j = 0; j < size_2; j++)
        {
            arr[i][j] = 1 + rand() % 9;
        }
    }


}

void show(int* arr[], int size_1, int size_2)
{
    for (int i = 0; i < size_1; i++)
    {
        for (int j = 0; j < size_2; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
bool chek(int size_1, int size_2, int size_3)
{
    if (size_1 >= min && size_2 >= min && size_3 >= min)
        return 1;
    else
        return 0;
}

void rezalt_(int* arr[], int* arr_1[], int* arr_2[], int size_1, int size_2, int size_3)
{
    for (int i = 0; i < size_1; i++)
    {
        arr[i] = new int[size_3];
        for (int j = 0; j < size_3; j++)
        {
            arr[i][j] = 0;
            for (int k = 0; k < size_2; k++)
                arr[i][j] += arr_1[i][k] * arr_2[k][j];
        }
    }
}