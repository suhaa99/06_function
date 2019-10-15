#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(c)
{
	int n, r;
	c=factorial(n)/factorial(n-r)/factorial(r);
	return n, r;
}

int factorial(n)
{
	int res=1;
	int i;
	for(i=1; i<=n; i++)
	{
		res=res*i;
	}
	return res;
}

int main(void) {
	
	int n, r;
	printf("input two integers : ");
	scanf("%d%d", &n, &r);
	
	combination(n, r);
	printf("combination : %d", combination);
	
	
	
}


