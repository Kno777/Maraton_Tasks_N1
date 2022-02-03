#include <iostream>

int ** matrix_number(int** matrix ,const int size = 2)
{
    for(int i = 0; i < size; ++i)
    {
        matrix[i] = new int[size];
    }

    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cout << "Input Matrix Elem [" << i << "]" << "[" << j << "]:";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "This is my matrix" << std::endl;

    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    //std::swap(matrix[1][0] , matrix[0][1]);
    /*
    int convert = 0;
    for(int i = 0; i < size; ++i)
    {
        convert = matrix[size - 1 - i][i];
        matrix[size - 1 - i][i] = matrix[i][size - 1 - i];
        matrix[i][size -  1 - i] = convert;
    }
    */

    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cout << matrix[j][size - 1 - i] << " ";
        }
        std::cout << std::endl;
    }


    return 0;

}

int main()
{
    const int size = 2;
    int ** matrix = new int*[size];
    matrix_number(matrix,size);
    for(int i = 0; i < size; ++i)
    {
        delete[] matrix[i];
    }
    delete[]matrix;
    

}