#include<stdio.h>
int main ()
{
	int days , years , weeks ;
	printf("Entern days :");
	scanf ("%d", &days);
	
	years = (days / 365);
	weeks = (days % 365)/7;
	
	printf ("years : %d\n", years);
	printf ("weeks : %d", weeks);
	
	return 0;

}
