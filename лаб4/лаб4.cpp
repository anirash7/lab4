#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>


//� ������ ������ ������ N ������ (N � �����). ����������
//���������� ����, ��������� � ������ ������.

/* int main()
{
	system("chcp 1251");
	int n;
	printf("������� n: "); scanf("%d", &n);
	int d = n / 3600 / 24;
	printf("%d", d);
}*/
//20.���� ������������ �����. ���������� �� ������� �����
//����, ������� �� ������ ��������, ������ ������ �����.
int main()
{
	system("chcp 1251");
	int number;
	printf("������� number: "); scanf("%d", &number);
	int nn = number;
	int n0, n2, n4;
	n4 = number % 100000/10000;
	n2 = number % 1000/100;
	n0 = number % 10;
	int s = nn - (n0 + n2 + n4);
	printf("%d", s);

}
