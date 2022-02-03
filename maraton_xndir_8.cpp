#include <iostream>

int ** matrix_number(int** matrix ,const int size = 3)
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

    int zero = 0;

    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            if(matrix[i][j] == zero)
            {
                for(int x = 0; x < size; ++x)
                {
                    matrix[x][j] = zero;
                }
                for(int k = 0; k < size; ++k)
                {
                    matrix[i][k] = zero;
                }
            }
        }
    }

    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    const int size = 3;
    int ** matrix = new int*[size];
    matrix_number(matrix,size);
    for(int i = 0; i < size; ++i)
    {
        delete[] matrix[i];
    }
    delete[]matrix;
}