#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
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
			printf("%4d",A[i][j]);
		}	printf("\n");
	}	
	
	
	printf("\nzig zag matrix:\n");
	
	for(i=0;i<n;i+=2)
	{
		for(j=0;j<m;j++)
		{
		printf("%4d",A[i][j]);
			}
			
		for(j=m-1;j>=0;j--)
		{
		printf("%4d",A[i+1][j]);
			}
			
	}
		
	

	
	return 0;
	}
