#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x)*(x)*(x)+4*(x)*(x)-10)
#define N 100
#define epsilon 10e-6
int main()
{
	double x0,x1,x2;
	printf("Enter x0 & x1:");
	scanf("%lf %lf",&x0,&x1);
	for(int i=0;i<N;i++)
	{
		x2=x1-(f(x1)*(x1-x0))/(f(x1)-f(x0));
		if(f(x2)<=epsilon)
	{
		printf("Root:%lf\n",x2);
		exit(0);
	}
		x0=x1;
		x1=x2;
	}
	return 0;
}
