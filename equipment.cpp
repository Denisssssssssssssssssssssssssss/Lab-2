#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include "equipment.h"

Equipment inputeq() {
	Equipment equ;
	int cost;
	long lenghtofeqtitle = 1;
	char* eqtitle = (char*)malloc(sizeof(char));;
	char c;
	printf("������� ������������: ");
	while ((c = getchar()) != '\n') {
		eqtitle[lenghtofeqtitle - 1] = c;
		lenghtofeqtitle++;
		eqtitle = (char*)realloc(eqtitle, lenghtofeqtitle);
	}
	eqtitle[lenghtofeqtitle - 1] = '\0';
	printf("��������� ������������: ");
	scanf("%d", &cost);
	equ.cost = cost;
	equ.eqtitle = eqtitle;
	return equ;
}

Equipment eqinitiation(char jtitle[], int monthcost) {
	Equipment equ;
	equ.eqtitle = (char*)malloc(sizeof(char));
	strcpy(equ.eqtitle, jtitle);
	equ.cost = monthcost;
	return equ;
}
 
void eqoutput(Equipment equ) {
		printf("������������: %s\n", equ.eqtitle);
		printf("���������: %d\n", equ.cost);
	}
	