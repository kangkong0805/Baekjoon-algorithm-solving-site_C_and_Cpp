#include<stdio.h>
int main(void)
{
	int n = scanf_s("%d", &n) * n, num = n, cnt = 0;
	do n = n % 10 * 10 + (n % 10 + n / 10) % 10, cnt++; while (num != n);
	printf("%d", cnt);
}