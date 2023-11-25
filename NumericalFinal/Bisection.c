#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) ((x) * (x)*(x)+4 * (x)*(x) -10)
#define epsilon 10e-6
//Take a=1.25 and b=1.5
double a, b, c;
int n = 100;
void BisecitonRoot(double a, double b)
{
    if(f(a)*f(b)>epsilon) 
    {
        printf("Root Doesnot lies between %lf and %lf\n",a,b);
        return;
    }
    // printf("Enter Number of Iterations:");
    // scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        c=(a+b)/2;
        printf("a\t  b\t  c\t  Iter\t  f(a)\t  f(b)\t  f(c)\n");
		printf("%lf %lf %lf %d %lf %lf %lf\n",a,b,c,i,f(a),f(b),f(c));
        if(f(c)<epsilon) printf("Root is:%lf\n",c);
        else if(f(a)*f(c)<0)b=c;
        else a=c;
    }
}
int main()
{
    printf("Enter a and b :\n");
    scanf("%lf %lf", &a, &b);
    BisecitonRoot(a, b);
}