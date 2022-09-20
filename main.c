#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float n;
	float d;
	
	printf("enter numerator: ");
	scanf("%i", &n);
	printf("enter denominator: ");
	scanf("%i", &d);
	
	printf("The result of division is %f\n.", n/d);
	
	return 0;
}
