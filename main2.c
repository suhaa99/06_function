#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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

int combination(int n, int r)
{
	int c;
	c=factorial(n)/factorial(n-r)/factorial(r);
	return c;
}


int main(int argc, char *argv[]) {
	
	int n, r;
	int res;
	
	printf("input two integers : ");
	scanf("%d %d", &n, &r);
	
	res=combination(n, r);
	printf("combination : %d", res);
	
	
	return 0;
}


