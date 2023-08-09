#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1416
int main()
{
	double a=0,b=2*PI,x;
	double h=(b-a)/360;
	int n=360;
	printf(" \"x\"\t\t\"sin(x)\"\n");
	x=a;
	for(int i=0;i<=n;i++)
	{
		x=a+i*h;
		printf("%lf,%lf\n",x,sin(x));
	}
	return 0;
	
	
}
