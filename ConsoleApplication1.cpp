﻿#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    double x1, x2, x3, y1, y2, y3, AB, BC ,AC, S, P, P_2; // Создаём переменные типа Дабл
    // Задаём координаты точек.
    cout << "Введите координату X для стороны А: ";
    cin >> x1;
    cout << "Введите координату Y для стороны А: ";
    cin >> y1;
    cout << "Введите координату X для стороны B: ";
    cin >> x2;
    cout << "Введите координату Y для стороны B: ";
    cin >> y2;
    cout << "Введите координату X для стороны C: ";
    cin >> x3;
    cout << "Введите координату Y для стороны C: ";
    cin >> y3;
    // Находим сторону AB BC AC:
    AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    AC = sqrt((x3 - x1) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    // Находим периметр
    P = AB + BC + AC;
    cout << "Периметр равен: " << P << endl;
    // Находим площадь
    P_2 = P / 2;
    S = sqrt(P_2 * (P_2 - AB) * (P_2 - BC) * (P_2 - AC));

    cout << "Площадь равна: " << S << endl;
 




// Задача 1
 // Дано три точки, являющихся вершинами треугольника. Найти периметр/ площадь. Подсказка: Найти длины сторон по этим точкам, потом периметр и площадь

 // ЗАДАЧА 2
// Дан радиус окружности. Найти длину окружности и площадь.


// Задача 3
 // Дано четырехначное число. Найти Сумму двух крайних цифр и произведение двух средних цифр.
}
