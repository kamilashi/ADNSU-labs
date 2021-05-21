
//outer matrix rotates

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {
int n,i,j,m,k,c,swap,mult;
	//printf("input the size of matrix\n");
	//scanf("%d",&n);
	//printf("input m\n");
	//scanf("%d",&m);
	int A[n][m],*p;
	n=4; m=4;
	mult=n*m;
	int d=0;
	int b[mult];
	for(i=0;i<m;i++)
	{ p=A[i];
		for(j=0;j<n;j++)
		{
			*(p+j) = rand()%10;
			printf("A[%d][%d] = %d   ",i,j,A[i][j]);
			b[d] = A[i][j]; d++;
				//printf("b[%d] = %d",k,b[k]);
		}	printf("\n");
	}
	for(k=0;k<c;k++)
	{
	printf("b[%d] = %d\n",k,b[k]);
	}
	swap=b[0];
	c=0;
	while(c<n-1){b[c]=b[c+1]; c++; //printf("b= %d\n",b[c]);
		}
	c=n-1;
	while(c<mult){b[c]=b[c+n];c=c+n;//printf("b= %d\n",b[c]);
		}
	c=mult-1;
		while(c>mult-n)
		{
			b[c]=b[c-1];c--; //printf("b= %d\n",b[c]);
		}
	c=mult-n;
		while(c>0)
		{
			b[c]=b[c-n];c=c-n;//printf("b= %d\n",b[c]);
		}
	
		b[n]=swap;
		printf("\nrotated matrix:\n\n",b[c]);
		
		k=0;
		for(i=0;i<m;i++)
	{ 
		for(j=0;j<n;j++)
		{
			A[i][j]=b[k];k++;
		printf("A[%d][%d] = %d   ",i,j,A[i][j]);
		}	printf("\n");
	}
		
	return 0;}	
