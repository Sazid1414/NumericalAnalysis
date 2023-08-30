#include<stdio.h>
#include<stdlib.h>
#define f(x) ((x)*(x)+1)
#define N 100
int main()
{
    double a,b,h,x[N+1],y[N+1],I,X;
    printf("Enter a & b:");
    scanf("%lf%lf",&a,&b);
    h=(b-a)/N;
    x[0]=a;
    for(int i=0;i<N;i++)
    {
        x[i]=x[i-1]+h;
    }
    x[N]=b;
    for(int i=0;i<=N;i++)
    {
        y[i]=f(x[i]);
    }
    X=y[0]+y[N];
    for(int i=1;i<N;i++)
    {
        I+=y[i];
    }
    I=h*(X+2*I)*0.5;
    return 0;

}
