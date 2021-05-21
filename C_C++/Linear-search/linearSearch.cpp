#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
	int n,i,X,count;
	printf("This program searches for input value X in a randomly generated array.\n");
	printf("enter the size of array\n");
	scanf("%d",&n);
	srand(time(NULL));
	int array[n];
	count=0;
	for (i = 0; i < n; i++) 
	{
    array[i] = rand()%1001;
    printf("%d\n",array[i]);
	}
     printf("enter the value of X\n");
     scanf("%d",&X);
		for (i = 0; i < n; i++) 
		{
         if (array[i]==X)
		    {printf("the value %d was found at index %d\n",X,i); count++ ; }}
	    if ((count)==0) printf ("not found");
return 0;}

