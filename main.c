#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return (a+b);
}

//===================================================

int square(int n)
{
	return (n*n);
}

//====================================================

int get_max(int a, int b)
{
	if(a>b) return a;
	else return b;
}

//====================================================

int main(int argc, char *argv[]) {
	
	int a, b;
	int output;
	
	a=2;
	b=5;
	
	output = sumTwo(a,b);
	printf("sumTwo : %i\n", output);
	
	printf("square : %i\n", square(a));    
	
	printf("get_max : %i\n", get_max(a,b));
	

	return 0;
}
