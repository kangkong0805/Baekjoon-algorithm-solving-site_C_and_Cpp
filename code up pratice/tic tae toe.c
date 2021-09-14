#include<stdio.h>
void main()
{
	int x, y, cnt = 0;
	char arr[3][3] = { 0 };
	do {
		printf("(x, y) ÁÂÇ¥ : ");
		scanf("%d %d", &x, &y);
		arr[x][y] = 1;
		for (int i = 1; i <= 7; i++) {
			for (int j = 1; j <= 11; j++) {
				if (j % 4 == 0)printf("|");
				else if (i % 2 == 1)printf("-");
				else if ((j - 2) % 4 == 0)printf("%c", cnt % 2 == 0 ? 'O' : 'X');
				else printf(" ");
			}
			printf("\n");
		}
		cnt++;
	} while (1);
}