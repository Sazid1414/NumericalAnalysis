#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
	int n=180;
	double a=0,b=2*PI,h=(b-a)/n,x;
	x=a;
	printf("\"x\"\t\"tan(x)\"\n");
	for(int i=0;i<=n;i++)
	{
		x=a+i*h;
		printf("%lf,%lf\n",x,tan(x));
	}
	return 0;
}
