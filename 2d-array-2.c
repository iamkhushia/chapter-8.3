#include<stdio.h>

main()
{
	//Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.
	
	int r,c;
	
	printf("enter row size=");
	scanf("%d",&r);
	
	printf("enter column size=");
	scanf("%d",&c);
	
	int a[r][c],i,j,b[r][c],sum[r][c];
	
	printf("enter A array element=\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter B array element=\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("sum of A & B array element=\n");
	
		for(i=0; i<r; i++)
	   {
		    for(j=0; j<c; j++)
		    {
			   sum[i][j] = a[i][j] + b[i][j];
			   printf("%d",sum[i][j]);
		    }
		
		printf("\n");
	   }
}