#include <stdio.h>
#include<stdlib.h>

int odd(int X);
int even(int X);
int total(int X);
int main(void)
{
	int n,sum;
	char mode;
	printf("1+2+3+....+n n¬°¦h¤Ö?\n");
	scanf_s("%d",&n);
	printf("odd sum(o) or even sum(e) or total(t)?\n");
	scanf_s(" %c", &mode);
	switch (mode)
	{
		case('o'):
			sum = odd(n);
			break;
		case('e'):
			sum = even(n);
			break;
		case('t'):
			sum = total(n);
			break;
	}
	printf("sum=%d", sum);
	return(0);
	system("pause");
}
int odd(int X)
{
	int i, t = 0;
	for (i = 0; i <= X; i++)
	{
		if (i % 2 == 1)
		{
			t = t + i;
		}

	}
	return(t);
}
int even(int X)
{
	int i, t = 0;
	for (i = 0; i <= X; i++)
	{
		if (i % 2 == 0)
		{
			t = t + i;
		}

	}
	return(t);
}
int total(int X)
{
	int i, t = 0;
	for (i = 0; i <= X; i++)
	{
		t = t + i;
	}
	return(t);
}