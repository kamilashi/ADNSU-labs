#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
	int n,i,max,min,mid,c,count,d,X;
	printf("enter the size of array\n");
	scanf("%d",&n);
	srand(time(NULL));
	int array[n];
	
	for (i = 0; i < n; i++) 
	{
    array[i] = rand()%1001;
    printf("%d\n",array[i]);
	}
     
   for (i = 0; i < n-1; i++) 
      { 
        for (d = 0; d < n-1; d++) 
          
          {
		  
	          if(array[d]>array[d+1]) 
	          { 
		        c=array[d]; 
		        array[d]=array[d+1]; 
		        array[d+1]=c; 
		      }
	      }
      }
     
    printf("Sorted list in ascending order:\n");
 
    for (i = 0; i < n; i++)
     printf("%d\n", array[i]);
 
 printf("enter X\n");  
 scanf("%d",&X);
      min=0;
      max=n-1;
      mid=(min+max)/2;
   count=0;   
      for(i=0;i<n;i++) 
     { 
      	if(X==array[mid]) {printf("%d was found at index %d\n",X,mid); count=1;break;} else {
      	  if (X<array[mid]) mid == max; else mid == min;
      	    for(i=min;i<=max;i++)
      	            {
      	  	   if(X==array[i]) {printf("%d was found at index %d\n",X,i); count++;}
      	  	          }
      	  	}
      	}
      	
    if(count==0) {printf("not found");}
      	
return 0;
}
