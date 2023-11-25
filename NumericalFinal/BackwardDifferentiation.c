#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x)*(x)+1)
int n=10;
double a,b,h;
int main()
{
    double x[n+1],y[n+1],dy[n+1];
    printf("Enter a and b: ");
    scanf("%lf %lf",&a,&b);
    x[0]=a;
    h=(b-a)/n;
    for(int i=1;i<n;i++)
    {
        x[i]=x[i-1]+h;
    }
    x[n]=b;
    for(int i=0;i<=n;i++)
    {
        y[i]=f(x[i]);
    }
    for(int i=1;i<=n;i++)
    {
        dy[i]=(y[i]-y[i-1])/h;
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%lf \n",dy[i]);
    }

}