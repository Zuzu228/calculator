#include<iostream>
#include<cmath>
#include<Windows.h>
#include<algorithm>

#pragma execution_character_set("utf-8")

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int choice;

    // Тестовыйкомментарий !
    do
    {
        cout << "КАЛЬКУЛЯТОР\n";
        cout << "1. Сложить 2 числа\n";
        cout << "2. Вычесть первое из второго\n";
        cout << "3. Перемножить два числа\n";
        cout << "4. Разделить первое на второе\n";
        cout << "5. Возвести в степень N первое число\n";
        cout << "6. Найти квадратный корень из числа\n";
        cout << "7. Найти 1 процент от числа\n";
        cout << "8. Найти факториал из числа\n";
        cout << "9. Выйти из программы\n";

        cout << "\nВведите номер операции: ";
        cin >> choice;

        double r, h;

        switch (choice)
        {
        case 1:
        {
            
            cout << "Введите первое число: ";
            cin >> r;

            cout << "Введите второе число: ";
            cin >> h;

            cout << "Результат: " << r + h << "\n";
            break;
        }

        case 2:
        {


            cout << "Введите первое число: ";
            cin >> r;

            cout << "Введите второе число: ";
            cin >> h;

            cout << "Результат: " << h - r << "\n";
            break;
        }

        case 3:
        {
           

            cout << "Введите первое число: ";
            cin >> r;

            cout << "Введите второе число: ";
            cin >> h;

            cout << "Результат: " << r * h << "\n";
            break;
        }

        case 4:
        {
  

            cout << "Введите первое число: ";
            cin >> r;

            cout << "Введите второе число: ";
            cin >> h;

            if (h != 0)
            {
                cout << "Результат: " << r / h << "\n";
            }
            else
            {
                cout << "На ноль делить нельзя\n";
            }

            break;
        }

        case 5:
        {
      

            cout << "Введите первое число: ";
            cin >> r;

            cout << "Введите степень: ";
            cin >> h;

            cout << "Результат: " << pow(r, h) << "\n";
            break;
        }

        case 6:
        {
            

            cout << "Введите число: ";
            cin >> r;

            cout << "Результат: " << sqrt(r) << "\n";
            break;
        }

        case 7:
        {


            cout << "Введите число: ";
            cin >> r;

            cout << "1 процент: " << r / 100 << "\n";
            break;
        }

        case 8:
        {
            int n;
            double factorial = 1;
            cout << "Введите число: ";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {

                factorial = factorial * i;
            }
            cout << "Факториал: " << factorial << "\n";
            break;

        }
        case 9:
        {
            cout << "Выход из программы\n";
            break;
        }

        default:
        {
            cout << "Такой операции нет\n";
            cin.clear();
            cin.ignore(10000, '\n');

            break;
        }
        }

    } while (choice != 9);

    return 0;
}

