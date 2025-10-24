#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j, k;
    int found = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
        	printf("element [%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        { printf("%d ",a[i][j]);
    }printf("\n");
}
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int smallRow = 1, largeCol = 1;

            
            for (k = 0; k < 3; k++)
            {
                if (a[i][k] < a[i][j])
                    smallRow = 0;
            }

            
            for (k = 0; k < 3; k++)
            {
                if (a[k][j] > a[i][j])
                    largeCol = 0;
            }

            if (smallRow == 1 && largeCol == 1)
            {
                printf("Saddle point is %d at position (%d,%d)\n", a[i][j], i, j);
                found = 1;
            }
        }
    }

    if (found == 0)
        printf("No saddle point found.\n");

    return 0;
}

