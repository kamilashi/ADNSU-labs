#include <stdio.h>
#include <stdlib.h>
int matrix_product_M_times_M(int M[][3],int D[][3]);
int main()
{   int n;
	scanf("%d",n);
	n=3;
	int **D = (int **)malloc(n * sizeof(int *)); 

    for (int i=0; i<n; i++) 
{
         D[i] = (int *)malloc(n * sizeof(int)); 
}


	int **M = (int **)malloc(n * sizeof(int *)); 

    for (int i=0; i<n; i++) 
{
         M[i] = (int *)malloc(n * sizeof(int)); 
}
int h=1;

for (int i=0; i<n; i++) 
{
        for (int j=0; j<n; j++) 
{
         M[i][j] = h; 
} 
h++;
}

int matrix_product_M_times_M(int M[][3],int D[][3]);
{int Sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			Sum+=M[i][j]*M[j][i];
		}
	}
}

return 0;}