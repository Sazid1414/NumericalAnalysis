#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) ((x) * (x) * (x) + 4 * (x) * (x) - 10)
#define g(x) (pow((-4 * (x) * (x) +10), 1.0/3))
#define epsilon 10e-6

int n = 100;

void FixedPoint(double a)
{
    for (int i = 0; i < n; i++)
    {
        double c = g(a);
        printf("a\t  b\t  c\t  Iter\t  f(a)\t  f(c)\n");
        printf("%lf\t%lf\t%d\t%lf\t%lf\n", a, c, i, f(a), f(c));
        if (fabs(f(c)) < epsilon)
        {
            printf("Root is: %lf\n", c);
            return;
        }
        else
        {
            a = c;
        }
    }
    printf("Method did not converge within %d iterations.\n", n);
}

int main(int argc, char **argv)
{
    double a;
    printf("Enter a: ");
    scanf("%lf", &a);
    FixedPoint(a);
    return 0;
}
