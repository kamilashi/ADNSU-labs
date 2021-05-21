#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
 { int i,n,steps,temp;
 	printf("This program sorts a randomly generated array using the selection sort algorithm.\n");
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
int A[n];
    for (i = 0; i < n; i++) 
	{A[i] = rand()%1001;
    printf("%d\n",A[i]); }
    for(steps=0;steps<n;++steps)
    for(i=steps+1;i<n;++i)
     {
         if(A[steps]>A[i])           
 {temp=A[steps];
             A[steps]=A[i]; 
            A[i]=temp; }    }
    printf("\nIn ascending order: \n");
    for(i=0;i<n;++i)
        printf("%d  \n",A[i]);
    return 0;}

