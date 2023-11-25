#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) ((x) * (x) * (x) + 4 * (x) * (x) - 10)
#define epsilon 1e-6
#define max_iterations 100

double a, b, c;

void Secant()
{
    for (int i = 0; i < max_iterations; i++)
    {
        if (f(a) == f(b))
        {
            printf("Mathematical error!\n");
            return;
        }

        double denominator = f(b) - f(a);

        if (fabs(denominator) < epsilon)
        {
            printf("Denominator is too small, the method may fail.\n");
            return;
        }

        c = (b * f(b) - a * f(a)) / denominator;

        if (fabs(f(c)) < epsilon)
        {
            printf("Root: %lf\n", c);
            return;
        }
        else
        {
            a = b;
            b = c;
        }
    }

    printf("Method did not converge within %d iterations.\n", max_iterations);
}

int main(int argc, char **argv)
{
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    Secant();
    return 0;
}
