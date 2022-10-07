#include "employee.h"
#include <string>
#include <stdio.h>
#include <iostream>

//����������� ������ employee �� ����� �����������
employee::employee(int i, jobtitle j, equipment e) {
	id = i;
	equ = e;
	jt = j;
}

//����������� ������ employee � ����� ����������
employee::employee(int x) {
	id = x;
	equipment e(x);
	equ = e;
	jobtitle j(x);
	jt = j;
}

//����������� ������ employee ��� ����������
employee::employee() {
	id = 0;
	equipment e;
	jobtitle j;
	jt = j;
	equ = e;
}

//����� ������� ������ employee
void employee::output() {
	cout << "ID: " << this->id << endl;
	jt.output();
	equ.output();
}

//����� ����� employee
void employee::input() {
	cout << "������� ID: ";
	cin >> this->id;
	while (getchar() != '\n');
	jt.input();
	while (getchar() != '\n');
	equ.input();
}

//����� �������� ������
int employee::empcost() {
	int salary = 0; //�������
	salary += jt.monthcost + equ.cost;
	return salary;
}
