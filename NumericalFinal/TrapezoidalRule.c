#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x)*(x)+1)
int n=10;
double a,b,h;
int main(int argc, char **argv)
{
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    h=(b-a)/h;
    double x[n+1],y[n+1],I,X;
    x[0]=a;
    for(int i=1; i<n; i++)
    {
        x[i]=x[i-1]+h;
    }
    x[n]=b;
    for(int i=0;i<=n;i++)
    {
        y[i]=f(x[i]);
    }
    X=y[0]+y[n];
    I=h*(X+2*I)/2;
    printf("Integral Value:%lf\n",I);
    return 0;
}