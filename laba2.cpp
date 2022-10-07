#include "employee.h"
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <iostream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size, i;
    employee human1, * men[3];
    employee human2(2);
    equipment equ("Форма", 50);
    jobtitle jt("Охранник", 100);
    employee human3(1, jt, equ);

    human1.output();
    human2.output();
    human3.output();
    cout << "Зарплата: " << human3.empcost() << endl;
    cout << "Введите размер массива: ";
    cin >> size;
    employee* arr = new employee[size]; //динамический массив объектов класса
    for (i = 0; i < size; i++) {
        (arr + i)->input();
        (arr + i)->output();
    }
    delete[] arr;
    employee* human = new employee;
    *human = human1;
    human1.output();
    (*human).output();
    delete human;
    //работа с массивом динамических объектов класса
    men[0] = &human1;
    men[1] = &human2;
    men[2] = &human3;
    for (i = 0; i < 3; i++) {
        men[i]->output();
    }
    return 0;
}

