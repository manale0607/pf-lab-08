#include<stdio.h>
int main()
{
	int N,prime,i,j;
	printf("enter range 0-N: ");
	scanf("%d",&N);
	for ( i=2;i<N;i++)
	{
		prime=1;
		 for ( j = 2; j < i; j++) 
		 { 
            if (i % j == 0) 
            {
			prime=0;
            
			}
	     }
	     if (prime == 1)
	printf("%d ",i); 
	}
	
	return 0;
}
	
