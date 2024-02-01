#include<stdio.h>
void main()
{
float f=5;
float e=0.000001,x=f,y=1;
while(x-y>e)
{
x=(x+y)/2;
y=f/x;
}
printf("%f\n",x);
}
