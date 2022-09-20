#include <iostream>
#include <string.h>
#include <cstring>
#include <Windows.h>

using namespace std;

//Функция для сравнения строк
int _strcmp(const char *s1, const char *s2)
{
    int ansver = 0; //переменная с результатом сравнения
    int countS1 = 0; //переменная с количеством символов в 1-й строке
    int countS2 = 0; //переменная с количеством символов во 2-й строке
    //Подсчёт количества элементов в строках
    while (s1[countS1] != '\0')
    {
        countS1++;
    }
    while (s2[countS2] != '\0')
    {
        countS2++;
    }
    //Сравнение и возврат результата
    if (countS1 > countS2)
    {
        return 1;
    }
    else if (countS2 > countS1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    //Ввод строк с консоли
    cout << "Введите первую строку: ";
    char s1[1000];
    cin.getline(s1, 1000, '\n');
    cout << "Введите вторую строку: ";
    char s2[1000];
    cin.getline(s2, 1000, '\n');
    cout << endl;
    cout << "Своя функция:" << endl;
    cout << "Вывод: " << _strcmp(s1, s2) << endl;
    cout << "Встроенная функция:" << endl;
    cout << "Вывод: " << strcmp(s1, s2) << endl;
}