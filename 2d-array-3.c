#include<stdio.h>

main()
{
	//Write a Program to find the sum of diagonal elements from a given 2D array.
	
	int i,j,r,c;
	
	printf("enter row size=\n");
	scanf("%d",&r);
	
	printf("enter column size=\n");
	scanf("%d",&c);
	
	int a[r][c],sum=0;
	
	printf("\nenter the elelment \n");
//	scanf("%d",&a[i][j]);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix\n");
	for(i=0; i<r; i++)
	{
	    for(j=0; j<c; j++)
	    {
	    	 printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("the sum of diagonal elements=%d\n",sum);
}