#include "equipment.h"
#include <iostream>
#include <string>
using namespace std;

//����������� ������ jobtitle �� ����� �����������
equipment::equipment(string j,int cost) {
	eqtitle = j;
	this-> cost = cost;
}

//����������� ������ subordinates � ����� ����������
equipment::equipment(int x) {
	cost = x;
	eqtitle = to_string(x);
}

//����������� ������ subordinates ��� ����������
equipment::equipment() {
	cost = 0;
	eqtitle = "-";
}

//����� ����� ������ subordinates
void equipment::input() {
	
	cout << "������� ��� ������������: ";
	getline(cin, eqtitle);
	cout << "������� ���� ������������: ";
	cin >> cost;

}

//����� ������
void equipment::output() {
	cout << "������������: " << eqtitle << endl;
	cout << "���� ������������: " << cost << endl;
}
