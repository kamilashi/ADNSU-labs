#include <stdio.h>
#include <conio.h>
#include <math.h>
float func (float x, float y) {return x*y+sqrt(y);}
int main () {
float y,pre_y,x,h,i;
printf("enter step h:\n");
scanf("%f",&h);
printf("enter initial condition x:\n");
scanf("%f",&x);
printf("enter initial condition y:\n");
scanf("%f",&y);
printf("enter the final x value\n");
scanf("%f",&i);
	
	do
	{
	pre_y=y+h*func(x,y);
	y+=h*(func(x,y)+func(x+h,pre_y))/2.;
	x+=h;
	}while(x!=i);
	
	printf("f(%f) = %f",x,y);
	
	
return 0;}
