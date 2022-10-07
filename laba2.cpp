#include "employee.h"
#include "stdio.h"
#include <conio.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Employee human1;
    char c, str[] = "Охранник";
    char str1[] = "Защита";
    
        human1 = initiation(11, str,200,str1,50);
        output(human1);
        printf("Затраты: %d\n", getsalary(human1));
        human1 = input();
        output(human1);
        printf("Затраты: %d\n", getsalary(human1));      
    return 0;
}

