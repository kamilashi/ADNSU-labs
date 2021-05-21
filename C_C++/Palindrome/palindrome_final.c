#include <conio.h>
#include <stdio.h>
#include <time.h>
int main() {
	int n,i,k,count1,j,flag,count2,flag2,max=0,count3,flag3;
	printf("Program that outputs the largest palindrome and whether it is even (even = 1) or not (even = 0) in a user defined array. \nExample: 1234554321 is an even palindrome, and 123454321 is an odd one.\n");
	printf("Enter the array size:\n");
	scanf("%d",&n);
 printf("\n");
	int a[n];
	int b[n];
	int c[n];
	
	for (i = 0; i < n; i++) 
	{
	printf("a[%d] = ",i);
    scanf("%d",&a[i]);
	}
	 
	count1=0;
	count2=0;
	count3=0;
	flag=0;
	flag2=0;
	flag3=0;
	int even=0;
	int odd=0;
for(i=1;i<n;i++)
{
	   if(flag==0)
	{
	   
		
		for(j=1;j<=i;j++)
		{
			
			
				 if((a[i-j]!=a[i+j])&&(a[i-j]!=a[i+j-1])) break; else 
			      { if (a[i-j]==a[i+j]) even=0; else {even=1;}

			        
				    if (flag==0) {b[0]=a[i];}
				      count1++; flag=1;
			      	 b[count1]=a[i+j];
				      max=count1;
			      } 
		      
		}
	} 
	   else 
	   {for(j=1;j<=i;j++)
		     {
			
			
				 if((a[i-j]!=a[i+j])&&(a[i-j]!=a[i+j-1])) {break;}  else 
			      { if (a[i-j]==a[i+j]) odd=1; else {odd=0;}

			       
				    {if (flag2==0) {c[0]=a[i];}}
				      count2++; flag2=1;
			      	 c[count2]=a[i+j];
				      //printf("c[%d] = %d",count2,c[count2]);
				     } 
			     flag2=0; 
			      
		      
	       }   
	   }       if(count2>max)
	              {{if (odd==1) even=0; else even=1;}
				  max=count2; 
	               	for(k=0;k<=max;k++) 
					   {b[k]=c[k];
					   	//printf("b[%d] = %d",k,b[k]);
					   	 }
					  
	             }  
	             
				 count2=0; 
				 
}

//printf("\n max = %d",max);
printf("\neven = %d",even);
//printf("\n odd = %d",odd);


	printf("\nthe 1st largest palindrome:\n");
	
if (even==1) { 	
	max--;
	for(i=max;i>=0;i--)
	{
	printf("%d",b[i]);
   }}
   
   else {
   for(i=max;i>0;i--)
	{
	printf("%d",b[i]);
   }}
   
	for(i=0;i<=max;i++)
	{
	printf("%d",b[i]);
   }
   
	
	
	return 0;}
