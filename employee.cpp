#include "employee.h"
#include <string>
#include <stdio.h>
#include <iostream>

//конструктор класса employee со всеми параметрами
employee::employee(int i, jobtitle j, equipment e) {
	id = i;
	equ = e;
	jt = j;
}

//конструктор класса employee с одним параметром
employee::employee(int x) {
	id = x;
	equipment e(x);
	equ = e;
	jobtitle j(x);
	jt = j;
}

//конструктор класса employee без параметров
employee::employee() {
	id = 0;
	equipment e;
	jobtitle j;
	jt = j;
	equ = e;
}

//метод полного вывода employee
void employee::output() {
	cout << "ID: " << this->id << endl;
	jt.output();
	equ.output();
}

//метод ввода employee
void employee::input() {
	cout << "Введите ID: ";
	cin >> this->id;
	while (getchar() != '\n');
	jt.input();
	while (getchar() != '\n');
	equ.input();
}

//метод подсчета затрат
int employee::empcost() {
	int salary = 0; //затарты
	salary += jt.monthcost + equ.cost;
	return salary;
}
