#include <iostream>
#include <windows.h> 
using namespace std;

/* Программа запрашивает у пользователя размер массива двумерного. Пользователь задет размер массива и заполняет его вручную */

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE h;
    h = GetStdHandle(STD_OUTPUT_HANDLE);

    srand(time(NULL));
    SetConsoleTextAttribute(h, 1 + rand() % 14);

    const int size = 100;
    int array[size][size];
    int a, b;
    cout << "Введите размер двумерного массива:\n\n";
    cout << "Количество строк: ";
    cin >> a;
    cout << "\nКоличество рядов: ";
    cin >> b;

    cout << "\nЗаполните вручную двумерный массив:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << "\nДвумерный массив равен:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    SetConsoleTextAttribute(h, 15);
    return 0;
}
