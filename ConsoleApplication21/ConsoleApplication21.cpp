#include <iostream>

#define min 2

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int size_1, size_2, size_3;
    int** arr_1, ** arr_2, ** rezalt;
    

    while (true)
    {
        cout << "гони ширену, высоту первой матрицы и ширену 2 мат " << endl;
        cin >> size_1 >> size_2 >> size_3;

        if (size_1 >= min && size_2 >= min && size_3 >= min)
            break;
        else
            cout << "Идиот" << endl;
    }

    cout << endl;

    arr_1 = new int* [size_1];
    arr_2 = new int* [size_2];

    for (int i = 0; i < size_1; i++)
    {
        arr_1[i] = new int[size_2];
        for (int j = 0; j < size_2; j++)
        {
            arr_1[i][j] = 1 + rand() % 9;
        }
    }

    for (int i = 0; i < size_2; i++)
    {
        arr_2[i] = new int[size_3];
        for (int j = 0; j < size_3; j++)
        {
            arr_2[i][j] = 1 + rand() % 9;;
        }
    }
    /////////////////////////////////////////////

    for (int i = 0; i < size_1; i++)
    {
        for (int j = 0; j < size_2; j++)
            cout << arr_1[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < size_2; i++)
    {
        for (int j = 0; j < size_3; j++)
        {
            cout << arr_2[i][j] << " ";
        }
        cout << endl;
    }

    /////////////////////////////////////////////

    rezalt = new int* [size_1];
    for (int i = 0; i < size_1; i++)
    {
        rezalt[i] = new int[size_3];
        for (int j = 0; j < size_3; j++)
        {
            rezalt[i][j] = 0;
            for (int k = 0; k < size_2; k++)
                rezalt[i][j] += arr_1[i][k] * arr_2[k][j];
        }
    }

    /////////////////////////////////////////////

    cout << endl;

    for (int i = 0; i < size_1; i++)
    {
        for (int j = 0; j < size_3; j++)
            cout << rezalt[i][j] << " ";
        cout << endl;
    }

    return 0;
}