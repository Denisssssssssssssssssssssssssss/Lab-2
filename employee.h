#pragma once
#include "jobtitle.h"
#include "equipment.h"
using namespace std;

class employee {
public:
	employee(int i, jobtitle j, equipment e);
	employee(int x);
	employee();
	void output();
	void input();
	int empcost();
private:
	int id; //�������������� �����
	jobtitle jt; //���������
	equipment equ; //����������
};
//123