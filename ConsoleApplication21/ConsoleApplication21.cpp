#include "Header.h"

int main()
{
  
    int size_1, size_2, size_3;
    int** arr_1, ** arr_2, ** rezalt;
   
    while (true)
    {
        cout << "give width, hight fisrt matrix and width 2 matrix " << endl;
        cin >> size_1 >> size_2 >> size_3;

        if (chek(size_1,size_2,size_3)==1)
            break;
        else
            cout << "Don`t correct" << endl;
    }

    cout << endl;

    arr_1 = new int* [size_1];
    arr_2 = new int* [size_2];
    
    add(arr_1, size_1, size_2);
    add(arr_2, size_2, size_3);

    show(arr_1, size_1, size_2);
    cout << endl;
    show(arr_2, size_2, size_3);


    rezalt = new int* [size_1];
    rezalt_(rezalt, arr_1, arr_2, size_1, size_2, size_3);

    cout << endl;
    show(rezalt, size_1, size_3);
       
    return 0;

}
