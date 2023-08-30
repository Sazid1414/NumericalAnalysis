#include<stdio.h>
#include<stdlib.h>
#define f(x) ((x)*(x)*(x)-5*(x)-10)
#define epsilon 10e-6
int main()
{
    double a,b,c;
    int n;
    scanf("%lf%lf%lf%d",&a,&b,&c,&n);
    if(f(a)*f(b)>0){printf("No Root");exit(0);}
    for(int i=0;i<n;i++)
    {
        c=(a+b)/2;
        printf("a\tb\tc\tIter\tf(a)\tf(b)\tf(c)\t");
        if(f(c)<=epsilon)
        {
            printf("Root :%lf",c);
            break;
        }
        else if(f(a)*f(c)<0)b=c;
        else a=c;
    }
    return 0;

}