#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1416
#define n 100
#define  a 0.0
#define b 2.0*PI
#define h ((b-a)/n)
#define f(x) (sin(x))

int main()
{
	double x[101],y[101],dy[101];
	x[0]=a;
	for(int i=1;i<n;i++)
	{
		x[i]=x[i-1]+h;
	}
	x[n]=b;	
	for(int i=0;i<=n;i++)
	{
		y[i]=f(x[i]);
	}
	dy[0]=(y[1]-y[0])/(x[1]-x[0]);
	for(int i=1;i<=n-1;i++)
	{
		dy[i]=((y[i+1]-y[i-1])/(x[i+1]-x[i-1]));
	}
	dy[n]=((y[n]-y[n-1])/(x[n]-x[n-1]));
	printf("\"x\"\t \"f(x)\"\t\"dy\"\n");
	for(int i=0;i<=n;i++)
	{
		printf("%lf,%lf,%lf\n",x[i],y[i],dy[i]);
	}
	return 0;
	
}
