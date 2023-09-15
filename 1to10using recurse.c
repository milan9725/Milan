#include<stdio.h>
int print1_to10(int x)
{
	if(x<=10)
	{
		printf("\n%d",x);
		print1_to10(x+1);
	}
}
main()
{
	print1_to10(1);
}
