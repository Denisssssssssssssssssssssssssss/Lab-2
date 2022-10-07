#include "employee.h"
#include "equipment.h"
#include <iostream>
#include <string>
using namespace std;

//����������� ������ jobtitle �� ����� �����������
jobtitle::jobtitle(string j, int h) {
	jtitle = j;
	monthcost = h;
}

//����������� ������ jobtitle � ����� ����������
jobtitle::jobtitle(int x) {
	jtitle = to_string(x);
	monthcost = x;
}

//����������� ������ jobtitle ��� ����������
jobtitle::jobtitle() {
	jtitle = "-";
	monthcost = 0;
}

//����� ����� ������ jobtitle
void jobtitle::input() {
	cout << "������� ���������: ";
	getline(cin, jtitle);
	cout << "������� ��������: ";
	cin >> monthcost;
	
}

//����� ������
void jobtitle::output() {
	cout << "���������: " << jtitle << endl;
	cout << "��������: " << monthcost << endl;
	
}