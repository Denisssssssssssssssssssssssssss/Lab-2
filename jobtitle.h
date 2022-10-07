#pragma once
#include <string>
using namespace std;

class jobtitle
{
	friend class employee;
public:
	jobtitle(string j, int h);
	jobtitle(int x);
	jobtitle();
	void input();
	void output();
private:
	string jtitle; //наименование должности
	int monthcost; //зарплата
};

