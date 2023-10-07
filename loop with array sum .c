#include<stdio.h>
main()
{
	int n[6]={9,4,5,2,7,8};
	int i,sum=0;
	for(i=0;i<6;i++)
	{
		printf("\n%d",n[i]);
		sum=sum+n[i];
	}
	printf("\nsum=%d",sum);
}
