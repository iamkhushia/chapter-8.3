#include<stdio.h>

main()
{
	//Write a Program to find the average of a given 2D array.
	
	int r,c;
	
	printf("enter row size=");
	scanf("%d",&r);
	
	printf("enter column size=");
	scanf("%d",&c);
	
	int i,j,a[r][c],sum=0,size,average;
	
	printf("enter a array element=\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("sum=\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum = sum + a[i][j];
			printf("%d\n",sum);
		}
	}
	size = sizeof(a) / sizeof(a[i][j]);
	printf("the 2d array size=%d\n",size);
	
    average = sum / size;
    printf("Average of an Array=%d\n",average);
}