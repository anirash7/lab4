#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>


//С начала недели прошло N секунд (N – целое). Определить
//количество дней, прошедших с начала недели.

/* int main()
{
	system("chcp 1251");
	int n;
	printf("Введите n: "); scanf("%d", &n);
	int d = n / 3600 / 24;
	printf("%d", d);
}*/
//20.Дано шестизначное число. Определить на сколько сумма
//цифр, стоящих на четных позициях, меньше самого числа.
int main()
{
	system("chcp 1251");
	int number;
	printf("Введите number: "); scanf("%d", &number);
	int nn = number;
	int n0, n2, n4;
	n4 = number % 100000/10000;
	n2 = number % 1000/100;
	n0 = number % 10;
	int s = nn - (n0 + n2 + n4);
	printf("%d", s);

}
