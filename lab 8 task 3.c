#include<stdio.h>
int main()
{
int i,j,arr1[2][2],arr2[2][2],sum[2][2];
printf("enter elements for array 1\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("enter element [%d][%d] : ",i,j);
scanf("%d",&arr1[i][j]);
}
printf("\n");

}

printf("enter elements for array 2\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("enter element [%d][%d] : ",i,j);
scanf("%d",&arr2[i][j]);
}
printf("\n");
}
    printf("sum of the 2 arrays are \n");
    for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {   
     sum[i][j]=arr1[i][j]+arr2[i][j];
     printf("%d ", sum[i][j]);
    }
	printf("\n");
}
	return 0;
}
