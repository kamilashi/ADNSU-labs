#include <stdio.h>
#include <math.h>
float function( float x,float p, float a, float b, float c
) 
{
	if(a>0){a=-a;b=-b;c=-c;}
	
	return a*(x+p)*(x+p)+b*(x+p)+c;
	
	}
	

int main () {
float a,b,c,k1,k2,x,n,y,p=0,step;

	printf("Welcome to Adaptive Area Calculator. This program estimates the area under a 2nd degree polynomial using a method that adapts the length of each step based on the slope.");
	printf("enter a:\n");
	scanf("%f",&a);
	printf("enter b:\n");
	scanf("%f",&b);
	printf("enter c:\n");
	scanf("%f",&c);
	

	
	printf("Function:\n%f*x^2 + %f*x + %f\n\n",a,b,c);
	
	if (b*b<a*4*c)
	{printf("D < 0");
	 } else {
	 if(a>0){a=-a;b=-b;c=-c;}	
	n=(4*a*c-b*b)/(4*a);
	k1=(-b-sqrt(b*b-4*a*c))/(2*a);
	k2=(-b+sqrt(b*b-4*a*c))/(2*a);
  float k = (fabs(k1)+fabs(k2))/2.0;
  
	 //shifts the graph of the function to the center
	 if(fabs(k1)!=fabs(k2))
	 {
	 	if((k2>0)&&(k2>k))
	 	{p=fabs(k2-k);}
	 	if((k1>0)&&(k1>k))
	 	{p=fabs(k1-k);}
	 	if((k2>0)&&(k2<k))
	 	{p=-fabs(k2-k);}
	 	if((k1>0)&&(k1<k))
	 	{p=-fabs(k1-k);}
	 	
	 	}
	 	printf("p = %f\n",p);
	 
	
	 	printf("n=%f\nk1=%f\nk2=%f\nk=%f\n",n,k1,k2,k);
	
	 	float E;	
	 printf("\nEnter the allowable slope error E:\n");
    scanf("%f",&E);
	float S=0;

	int count=0;

	while(k>0.1 && n>0.1){
	for(step=0;step<=k;step+=E)
		
	{ 
		if(fabs(n-function(step,p,a,b,c))>E)
		{count++;
			
		S=S+n*(step);
			
			n=(function(step,p,a,b,c));
			//printf("new n = %f\n",n);
			p+=step;
		
			k-=step;
			//printf("new k = %f\n",k);

		printf("S [%f] = %f\n",step,S);	
		break;
		}
	  }}
	
		//printf("S ~ %f\n",S);
		printf("S ~ %f\n",2*S);
	  
	}

	return 0;}
