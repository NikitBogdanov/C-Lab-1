#include <iostream>
#include <random>
using namespace std;

void processArray(int array[], int newArray[], const int arrayLength, int x)
{
	//Заполнение массива случайными числами в диапазоне от -20 до 70
	for (int i = 0; i < arrayLength; i++)
	{
		array[i] = rand() % 90 - 20;
	}
	//Вывод заполненного массива 
	cout << "\n";
	cout << "I n p u t  a r r a y" << endl;
	for (int i = 0; i < arrayLength; i++)
	{
		cout <<" " << array[i] << " ";
	}
	//Поиск максимального по модулю элемента в массиве
	int maxValue = abs(array[0]);
	for (int i = 1; i < arrayLength; i++)
	{
		if (maxValue < abs(array[i])) {
			maxValue = array[i];
		}
	}
	//Вывод макс. элемента
	cout << "\n";
	cout << "\n";
	cout << "M a x.  v a l u e: " << maxValue << endl;
	cout << endl;
	//Вывод массива после его нормирования (деления ма макс. элемент)
	cout << "After dividing by the maximum element:" << maxValue << endl;
	for (int i = 0; i < arrayLength; i++)
	{
		cout << " " << (double)array[i] / maxValue << " ";
	}
	//Формирование нового массива, все элементы которого после максимального равны "х"
	bool findMaxElement = false;
	for (int i = 0; i < arrayLength; i++)
	{
		if (array[i] == maxValue) 
		{
			findMaxElement = true;
		}
		else
		{
			newArray[i] = array[i];
		}
		if (findMaxElement == true)
		{
			newArray[i] = x;
		}
	}
}

int main() 
{
	//Ввод с консоли переменной "х"
	cout << "\n E n t e r: X" << endl;
	int x;
	cin >> x;
	//Инициализация массивов
	const int arrayLength = 20;
	int array[arrayLength];
	int newArray[arrayLength];
	for (int i = 0; i < arrayLength; i++) 
	{
		array[i] = 0;
		newArray[i] = 0;
	}
	processArray(array, newArray, arrayLength, x);
	//Вывод нового массива
	cout << "\n" << endl;
	for (int i = 0; i < arrayLength; i++)
	{
		cout << "\t" << newArray[i];
	}

	return 0;
}
