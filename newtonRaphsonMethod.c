#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) ((x)*(x)*(x)+4*(x)*(x)-10)
#define N 10000
#define epsilon 10e-8
double differentiation(double a)
{
	return (3*a*a+8*a);
}
int main()
{
	double x0,x1;
	printf("Enter the initial guess:");
	scanf("%lf",&x0);	
	for(int i=0;i<N;i++)
	{	
		if(f(x0)<=epsilon)
		{
		printf("Root:%lf\n",x0);
		exit(0);
		}
		x0=x0-(f(x0)/differentiation(x0));
		
	}
	return 0;
	
}
