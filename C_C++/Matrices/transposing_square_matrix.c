#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {
int n,i,j;
	printf("input the size of matrix\n");
	scanf("%d",&n);
	int A[n][n],*p;
	
	for(i=0;i<n;i++)
	{ p=A[i];
		for(j=0;j<n;j++)
		{
			*(p+j) = rand()%10;
			//printf("%4d",A[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{ p=A[n];
		for(j=0;j<n;j++)
		{
			printf("%4d",A[i][j]);
		}printf("\n");
	}
	
	printf("\ntransposed matrix:\n");
	
	for(j=0;j<n;j++)
	{ p=A[n];
		for(i=0;i<n;i++)
		{
			printf("%4d",A[i][j]);
		}printf("\n");
	}
	
	return 0;
	}
