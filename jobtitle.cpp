#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include "jobtitle.h"

Jobtitle inputjt() {
	Jobtitle jt;
	int monthcost;
	long lenghtofjtitle = 1; 
	char* jtitle = (char*)malloc(sizeof(char));;
	char c;
	printf("Введите должность: ");
	while ((c = getchar()) != '\n') {
		jtitle[lenghtofjtitle - 1] = c;
		lenghtofjtitle++;
		jtitle = (char*)realloc(jtitle, lenghtofjtitle);
	}
	jtitle[lenghtofjtitle - 1] = '\0';
	printf("Зарплата: ");
	scanf("%d", &monthcost);
	jt.monthcost = monthcost;
	jt.jtitle = jtitle;
	return jt;
}
Jobtitle jtinitiation(char jtitle[], int monthcost) {
	Jobtitle jt;
	jt.jtitle = (char*)malloc(sizeof(char));
	strcpy(jt.jtitle, jtitle);
	jt.monthcost = monthcost;
	return jt;
}
void jtoutput(Jobtitle jt) {
		printf("Должность: %s\n", jt.jtitle);
		printf("Зарплата: %d\n", jt.monthcost);
	}
