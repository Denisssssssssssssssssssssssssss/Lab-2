#pragma once
#include <string>

using namespace std;

class equipment
{
	friend class employee;
public:
	equipment(string j, int cost);
	equipment(int x);
	equipment();
	void input();
	void output();

private:

	string eqtitle; //наименование должности
	int cost; //стоимость экипировки
};

