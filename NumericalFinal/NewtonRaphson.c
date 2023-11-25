#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) ((x) * (x) * (x) + 4 * (x) * (x)-10)
#define g(x) (3 * (x) * (x) + 8 * (x))
#define epsilon 1e-6

double a, x, delx;
double fx, gx;
int n = 100;

void NewtonRaphson(double a)
{
    for (int i = 0; i < n; i++)
    {
        if (fabs(g(a)) < epsilon)
        {
            printf("No Solution\n");
            return;
        }

        a = a - f(a) / g(a);

        printf("Iteration %d: a = %lf, f(a) = %lf\n", i + 1, a, f(a));

        if (fabs(f(a) / g(a)) < epsilon)
        {
            printf("Root is %lf\n", a);
            return;
        }
    }
}

int main(int argc, char **argv)
{
    printf("Enter Initial Guess: ");
    scanf("%lf", &a);
    NewtonRaphson(a);
    return 0;
}
