#include<stdio.h>
	int main()
	{
		int i,a,b;
		
		printf("Enter the number :");
		scanf("%d",&b);
		
		for(i=1;i<=20;i++)
		{
			a=b*i;
			printf("\n%d",a);
		}
	return 0;
	}		
