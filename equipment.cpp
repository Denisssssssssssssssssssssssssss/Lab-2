#include "equipment.h"
#include <iostream>
#include <string>
using namespace std;

//����������� ������  �� ����� �����������
equipment::equipment(string j,int cost) {
	eqtitle = j;
	this-> cost = cost;
}

//����������� ������  � ����� ����������
equipment::equipment(int x) {
	cost = x;
	eqtitle = to_string(x);
}

//����������� ������  ��� ����������
equipment::equipment() {
	cost = 0;
	eqtitle = "-";
}

//����� ����� ������ 
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
