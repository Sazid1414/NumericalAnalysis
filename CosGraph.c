#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
	int n=360;
	double a=0,b=2*PI,x,h;
	h=(b-a)/n;
	
	x=a;
	printf("\"x\"\t \"cos(x)\"\n");
	for(int i=0;i<=n;i++)
	{
		x=a+i*h;
		printf("%lf,%lf\n",x,cos(x));
	}
	return 0;
}
