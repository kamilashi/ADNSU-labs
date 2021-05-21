#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
	int n,i,count,flag,m,d,k;
	printf("This program outputs all prime numbers found in a randomly generated array.\n");
	printf("Enter the array size:\n");
	scanf("%d",&n);
	srand(time(NULL));
	int array[n];
	int a[n];
	int prime[n];
	for (i = 0; i < n; i++) 
	{
    a[i] = rand()%101;
    printf("%d\n",a[i]);
	}
    printf("Prime integers:\n");
    count=0;
    
	for(i=0; i<n; i++) {array[i]=a[i];}
    
   for (i=0,k=0; i<n,k<n; i++,k++) 
   {  
      flag=0;
      for (d = 2; d < (array[i]); d++) 
      {
	    
    	   if (array[i]%d==0) {flag++;}
        
	   
      }
     if ((flag==0)&&(a[i]!=1)&&(a[i]!=0)) 
   
      {prime[k]=a[i]; 
      	
      printf("%d\n",prime[k]); 
      	count++;}
	}
	printf("\n%d prime integers was found\n",count);
	


return 0;
}
