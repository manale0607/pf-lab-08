#include<stdio.h>
int main()
{
	int i,j,k,arr[2][2][2];
	printf("enter elements for 3D array \n");
	for(i=1;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for (k = 0; k < 2; k++)
			{
			
			printf("enter element [%d][%d][%d] : ",i,j,k);
			scanf("%d",&arr[i][j][k]);
		}
		printf("\n");
		
	}}
	printf("Your 3D array :\n");
	for(i=1;i<3;i++)
	{
		printf("block %d \n",i);
		for(j=0;j<2;j++)
		{
			for (k = 0; k < 2; k++)
			{
			 printf("%d ", arr[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}
	
	}
