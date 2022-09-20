#include <iostream>
#include <memory>
using namespace std;

//Функция для вывода массива в консоль
void printArray(int** array, const int rows, const int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << *(*(array + i) + j) << "\t";
        }
        cout << endl;
    }
}

//Инициализация нового массива
void initializeNewArray(int **array, const int rows, const int columns)
{
    int* newArray = new int[columns * 3];

    int index = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i % 2 == 0)
            {
                *(newArray + index) = *(*(array + i) + j);
                index++;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < rows * 3; i++)
    {
        cout << *(newArray + i) << "\t";
    }
}

//Нахождение факториала
int getFactorial(int value, int sumij, int NumberOfRevolutions)
{
    if (sumij == 0)
    {
        return 1;
    }
    else if (NumberOfRevolutions >= sumij)
    {
        return value;
    }
    else
    {
        value *= (sumij - NumberOfRevolutions);
        NumberOfRevolutions++;
        getFactorial(value, sumij, NumberOfRevolutions);
    }
}

//Заполнение основного массива
void initializeArray(int **array, const int rows, const int columns)
{
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        for (int j = 0; j < 5; j++)
        {
            *(*(array + i) + j) = getFactorial(1, i + j, 0);
        }
    }
    printArray(array, rows, columns);
    initializeNewArray(array, rows, columns);
}

int main()
{
    int number_elements = 25;
    //Создание двумерного массива 
    int **array = new int*[5, 5];
    for (int i = 0; i < 5; i++)
    {
        array[i] = new int[5];
    }
    initializeArray(array, 5, 5);

    return 0;
}