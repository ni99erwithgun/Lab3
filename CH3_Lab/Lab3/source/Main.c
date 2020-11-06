#include <stdio.h>
#include <stdlib.h>

long int f(int p);
int main(void)
{
	long int n, m, a, b, c, sum;
	printf("求排列組合C m取n,m=?,n=?\n");
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	a = f(n);
	b = f(m);
	c = f(n - m);
	sum = a / (b * c);
	printf("C %d取%d=%d", n, m, sum);


	system("pause");
}
long int f (int p)
{
	if (p > 1)
	{
		long int r = p * f(p - 1);
		return r;
	}
	else
	{
		return 1;
	}
	
}