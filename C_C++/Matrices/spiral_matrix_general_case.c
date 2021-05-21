#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {
int n,i,j,m,k;
	//printf("input the size of matrix\n");
	//scanf("%d",&n);
	//printf("input m\n");
	//scanf("%d",&m);
	int A[n][m],*p;
	n=4; m=5;
	for(i=0;i<n;i++)
	{ p=A[i];
		for(j=0;j<m;j++)
		{
			*(p+j) = rand()%10;
			printf("A[%d][%d] = %4d",i,j,A[i][j]);
		}	printf("\n");
	}	
	
	
	printf("\nspiral matrix:\n");
	
		
		for(j=0;j<m;j++)
		{
			printf("%4d",A[0][j]);
		}
	
	
		for(i=1;i<n;i++)
	{ 
			printf("%4d",A[i][n]);
		}
	
	   for(j=n-1;j>=0;j--)
		{
			printf("%4d",A[n-1][j]);
		}
	for(i=n-2;i>0;i--)
	{ 
			printf("%4d",A[i][0]);
		}
		
		for(j=1;j<m-1;j++)
		{
			printf("%4d",A[1][j]);
		}
		for(j=m-2;j>0;j--)
	{ 
			printf("%4d",A[2][j]);
		}
	
	return 0;
	}
