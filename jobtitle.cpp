#include "employee.h"
#include "equipment.h"
#include <iostream>
#include <string>
using namespace std;

//конструктор класса jobtitle со всеми параметрами
jobtitle::jobtitle(string j, int h) {
	jtitle = j;
	monthcost = h;
}

//конструктор класса jobtitle с одним параметром
jobtitle::jobtitle(int x) {
	jtitle = to_string(x);
	monthcost = x;
}

//конструктор класса jobtitle без параметров
jobtitle::jobtitle() {
	jtitle = "-";
	monthcost = 0;
}

//метод ввода класса jobtitle
void jobtitle::input() {
	cout << "Введите должность: ";
	getline(cin, jtitle);
	cout << "Введите зарплату: ";
	cin >> monthcost;
	
}

//метод вывода
void jobtitle::output() {
	cout << "Должность: " << jtitle << endl;
	cout << "Зарплата: " << monthcost << endl;
	
}