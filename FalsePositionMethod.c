#include<stdio.h>
#include<stdlib.h>
#define f(x) ((x)*(x)-5*(x)-10)
#define epsilon 10e-6
int main()
{
	double a,b,c;
	int n;
	printf("Enter a & b & n:");
	scanf("%lf%lf%d",&a,&b,&n);
	if(f(a)*f(b)>0)
	{
		printf("No Root:%lf %lf\n",a,b);
		exit(0);
	}
	for(int i=0;i<n;i++)
	{
		c=(a*f(b)-b*f(a))/(f(b)-f(a));
		printf("a\t b\t Iter\t c\t f(a)\t f(b)\t f(c)\n");
		printf("%lf %lf %d %lf %lf %lf %lf\n",a,b,i,c,f(a),f(b),f(c));
		if(f(c)<=epsilon)
		{
			printf("Root:%lf\n",c);
			break;
		}
		else if(f(c)*f(a)<0)
		{
			b=c;
		}
		else if(f(b)*f(c)<0)
		{
			a=c;
		}
		
	}
	return 0;
	
}
