#include "equipment.h"
#include <iostream>
#include <string>
using namespace std;

//конструктор класса jobtitle со всеми параметрами
equipment::equipment(string j,int cost) {
	eqtitle = j;
	this-> cost = cost;
}

//конструктор класса subordinates с одним параметром
equipment::equipment(int x) {
	cost = x;
	eqtitle = to_string(x);
}

//конструктор класса subordinates без параметров
equipment::equipment() {
	cost = 0;
	eqtitle = "-";
}

//метод ввода класса subordinates
void equipment::input() {
	
	cout << "Введите тип оборудования: ";
	getline(cin, eqtitle);
	cout << "Введите цену оборудования: ";
	cin >> cost;

}

//метод вывода
void equipment::output() {
	cout << "Оборудование: " << eqtitle << endl;
	cout << "Цена оборудования: " << cost << endl;
}
