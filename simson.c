#include<stdio.h>
#include<stdlib.h>
#define f(x) (sin(x))
#define N 100
int main()
{
    double upper_limit,lower_limit,h,x[N+1],y[N+1],Sum_X=0,Sum_O=0,Sum_E=0,I;
    printf("Enter upper limit:");
    scanf("%lf",&upper_limit);
    printf("Enter lower limit:");
    scanf("%lf",&lower_limit);
    h=(upper_limit-lower_limit)/N;
    x[0]=lower_limit;
    for(int i=1;i<N;i++)
    {
        x[i]=x[i-1]+h;
    }
    x[N]=upper_limit;
    for(int i=0;i<=N;i++)
    {
        y[i]=f(x[i]);
    }
    Sum_X=y[0]+y[N];
    for(int i=1;i<N;i++)
    {
        if(i%2==0)Sum_O+=y[i];
        else Sum_E+=y[i];
    }
    I=h*(Sum_X+4*Sum_O+2*Sum_E)/3;
    printf("Integral value is :%lf/n",I);
}