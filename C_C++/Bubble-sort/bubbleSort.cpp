#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
	int n,i,max,min,mid,c,count,d,X;
	printf("This program sorts a randomly generated array using the bubble sort algorithm.\n");
	printf("enter the size of array\n");
	scanf("%d",&n);
	srand(time(NULL));
	int array[n];
	for (i = 0; i < n; i++) {
    array[i] = rand()%1001;
    printf("%d\n",array[i]);
	} 
   for (i = 0; i < n-1; i++) 
      { for (d = 0; d < n-1; d++) 
          { if(array[d]>array[d+1]) 
	          { c=array[d]; 
		        array[d]=array[d+1]; 
		        array[d+1]=c; }}}
     printf("Sorted list in ascending order:\n"); 
    for (i = 0; i < n; i++)
     {printf("%d\n", array[i]);}
return 0;
}

