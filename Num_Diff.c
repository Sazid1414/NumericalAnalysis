#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (sin(x))
#define N 100
int main()
{
    double a,b,h,x[N+1],y[N+1],dy[N+1];
    printf("Enter a:");
    scanf("%lf",&a);
    printf("Enter b:");
    scanf("%lf",&b);
    h=(b-a)/N;
    x[0]=a;
    for(int i=1;i<N;i++)
    {
        x[i]=x[i-1]+h;
    }
    for(int i=0;i<=N;i++)
    {
        y[i]=f(x[i]);
    }

    dy[0]=(y[1]-y[0])/(x[1]-x[0]);//forward differentiation
    for(int i=1;i<N;i++)
    {
        dy[i]=(y[i+1]-y[i-1])/(x[i+1]-x[i-1]);//central differentiation
    }
    dy[N]=(y[N]-y[N-1])/(x[N]-x[N-1]);//backward differentiation

}