#include <stdio.h>
#include <conio.h>
#include <math.h>
float func (float x, float y) {return x+y-1;}
int main () {
float k1,k2,k3,k4,y,pre_y,x,h,i;
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
	k1=func(x,y);
	k2=func(x+(h/2.), y+((h/2.)*k1));
	k3=func(x+(h/2.), y+((h/2.)*k2));	
	k3=func(x+h, y+(h*k3));	
	y+=h/6.*(k1+2*k2+2*k3+k4);
	x+=h;
	}while(x!=i);
	printf("f(%f) = %f",x,y);
	
return 0;}

