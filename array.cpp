#include <iostream>


const int row_2D = 3;
const int col_2D = 3;

void printArr_1(int arr[5], int length)
{
    for (int i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}

void printArr_2(int arr[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}

void printArr_3(int* arr, int length)
{
    for (int i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}



void printArr_2D_v1(int arr[3][3], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printArr_2D_v2(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printArr_2D_v3(int (*arr)[3], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printArr_2D_v4(int arr[row_2D][col_2D])    // row и col объявлены глобально
{
    for (int i = 0; i < row_2D; ++i)
    {
        for (int j = 0; j < col_2D; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printArr_2D_v5(int* arr, int row, int col)  
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << *((arr + i * col) + j) << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}



void printArr_3D_v1(int arr[][2][2], int row, int col, int dpt)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            for (int k = 0; k < dpt; ++k)
            {
                std::cout << arr[i][j][k] << " ";
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void printArr_3D_v2(int (*arr)[2][2], int row, int col, int dpt)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            for (int k = 0; k < dpt; ++k)
            {
                std::cout << arr[i][j][k] << " ";
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}



int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int arr_2D_v1[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int arr_2D_v2[col_2D][col_2D] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int arr_3D[2][2][2] = { { { 5, 5 }, { 5, 5 } }, { { 5, 5 }, { 5, 5 } } };
    
    printArr_1(arr, 5);
    printArr_2(arr, 5);
    printArr_3(arr, 5);
    
    std::cout << '\n';
    
    printArr_2D_v1(arr_2D_v1, 3, 3);
    printArr_2D_v2(arr_2D_v1, 3, 3);
    printArr_2D_v3(arr_2D_v1, 3, 3);
    printArr_2D_v4(arr_2D_v2);
    printArr_2D_v5((int*)arr_2D_v1, 3, 3);
    
    std::cout << '\n';
    
    printArr_3D_v1(arr_3D, 2, 2, 2);
    printArr_3D_v2(arr_3D, 2, 2, 2);
    
}

