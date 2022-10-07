#pragma once
#include "equipment.h"
#include "jobtitle.h"

typedef struct employee {
	int id; 
	Equipment equ; 
	Jobtitle jt; 

} Employee;

Employee initiation(int id, char jtitle[], int monthcost, char eqtitle[], int cost);
Employee input();
void output(Employee human);
int getsalary(Employee human);
Jobtitle inputjt();
Equipment inputeq();
Equipment eqinitiation(char eqtitle[],int cost);
Jobtitle jtinitiation(char jtitle[], int monthcost);
void eqoutput(Equipment equ);
void jtoutput(Jobtitle jt);
