#include<stdio.h>
int main()
{
	int j,i,arr[2][2];
	printf("enter elements for array \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter element [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
		
	}
		printf("matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",arr[i][j]);
			
		}
		printf("\n");}
	
	printf("transpose of matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",arr[j][i]);
			
		}
		printf("\n");}
		return 0;
		}
