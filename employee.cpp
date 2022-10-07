#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string.h>
#include <stdio.h>
#include <iostream>
#include "equipment.h"
#include "jobtitle.h"
#include "employee.h"

Employee initiation(int id, char jtitle[], int monthcost,char eqtitle[], int cost) {
	Employee human;
	human.id = id;
	human.equ  = eqinitiation(eqtitle,cost);
	human.jt = jtinitiation(jtitle, monthcost);
	return human;
}

Employee input() {
	Employee human;
	int id;
	printf("ID: ");
	scanf("%d", &id);
	human.id = id;
	while (getchar() != '\n');
	human.equ = inputeq();
	while (getchar() != '\n');
	human.jt = inputjt();
	return human;
}


void output(Employee human) {
	printf("ID: %d\n", human.id);
	eqoutput(human.equ);
	jtoutput(human.jt);
}


int getsalary(Employee human) {
	int salary = 0;
	salary = human.jt.monthcost + human.equ.cost;
	return salary;
}