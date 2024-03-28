#include<stdio.h>

main()
{
	//Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
	
	int a[5][5];
	int i,j,sum=0;
	
	printf("enter array element=\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("boundary element of the array =\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf("%d ",a[i][j]);
				sum = sum + a[i][j];
			}
		}
		printf("\n");
	}
	
	printf("The sum of boundary elements of an Array = %d\n",sum);
}