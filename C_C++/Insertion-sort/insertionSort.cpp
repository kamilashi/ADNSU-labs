#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
	int n,i,max,min,mid,c,count,j,X;
	printf("enter the size of array\n");
	scanf("%d",&n);
	srand(time(NULL));
	int array[n];
	for (i = 0; i < n; i++) 
	{
    array[i] = rand()%1001;
    printf("%d\n",array[i]);
	} 
    for (i = 1; i < n; i++) 
      { 
        for (j = i; j > 0; j--) 
          {  
	          if(array[j-1]>array[j]) 
	          { 
		        c=array[j]; 
		        array[j]=array[j-1]; 
		        array[j-1]=c;
		      }}     } 
    printf("Sorted list in ascending order:\n"); 
    for (i = 0; i < n; i++)
     printf("%d\n", array[i]);
      return 0;}

