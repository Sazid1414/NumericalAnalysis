#include<stdio.h>
#include<stdlib.h>
#define f(x) ((x)*(x)-5*(x)-10)
#define epsilon 10e-6
int main()
{
	double a,b,c;
	int n;
	printf("Enter a & b & n:"); 
	scanf("%lf %lf %d",&a,&b,&n);
	if(f(a)*f(b)>0)
	{
		printf("No Root:%lf %lf\n",a,b);
		exit(0);
	}
	for(int i=0;i<n;i++)
	{
		c=(a+b)/2;
		printf("a\t  b\t  c\t  Iter\t  f(a)\t  f(b)\t  f(c)\n");
		printf("%lf %lf %lf %d %lf %lf %lf\n",a,b,c,i,f(a),f(b),f(c));
		if(f(c)<=epsilon)
		{
			printf("Root:%lf",c);
			
		}
		else if(f(a)*f(c)<0)
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






