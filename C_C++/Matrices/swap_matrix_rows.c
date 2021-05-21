#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {
int n,i,j;
	
	int A[4][4];
	n=4;
	int counter=1;
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<n;j++)
		{
			A[i][j]=counter;
			counter++;
			//printf("%4d",A[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<n;j++)
		{
			printf("%4d",A[i][j]);
		}printf("\n");
	}
	
	printf("\nswapped matrix:\n");
	int swaprow[4];
	//int B[4][4];
	for(j=0;j<4;j++)
	{
		swaprow[j]=A[3][j];
	}
	
	for(i=3;i>=0;i--)
	{ 
		for(j=0;j<n;j++)
		{   
			if(i<=3){
			A[i][j]=A[i-1][j];
				
			}
			if(i==0)
			{
				A[0][j]=swaprow[j];
			}
		}
	}
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<n;j++)
		{
			printf("%4d",A[i][j]);
		}printf("\n");
	}
	return 0;
	}
