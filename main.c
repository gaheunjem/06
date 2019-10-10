#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int sumTwo( int a, int b)
{
	int output;
	output = a + b;
	return output;	
}	

int square(int n)
{
	return n*n;
}

int get_max( int a, int b)
{
	if(a>b) 
		return a;
	else
		 return b;    // No else is same
}

	
int main(int argc, char *argv[]) {    	
		
	int p, q;
	p=3;
	q=4;
	
	printf("get_max : %d\n", get_max(p,q));
	printf("square : %d\n", square(p));
	printf("sumTwo : %d\n", sumTwo(p,q));
	
	return 0;
}
