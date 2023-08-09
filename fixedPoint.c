#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) ((x)*(x)*(x)-4*(x)*(x)-10)
#define g(x) sqrt((10-x*x*x)/4);
#define EPS 10e-6
int main()
{
	double x0=1.25,x1;
	//printf("Enter the initial guess:");
	//scanf("%lf",&ig);

	if(f(x1)==0)
	{
	printf("Root:%lf",x1);
	exit(0);
	}
	for(int i=0;i<100;i++)
	{
		x1=g(x0);
		if(fabs(f(x1)<=EPS)){
			printf("%lf\n",x1);
			return 0;
		}
		x0=x1;
			
	}
		
	
}
