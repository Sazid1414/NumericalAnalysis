#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double matrix[10][10];
void AugmentingIdentityMatrix(int dimension, double matrix[dimension][dimension])
{
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            if (i == j)
            {
                matrix[i][j + dimension] = 1;
            }
            else
            {
                matrix[i][j + dimension] = 0;
            }
        }
    }
}
void GaussJordanElimination(int dimension, double matrix[dimension][dimension + 1])
{
    for (int i = 0; i < dimension; i++)
    {
        if (matrix[i][i] == 0.0)
        {
            printf("Mathematical Error! Division by zero.\n");
            return;
        }
        for (int j = 0; j < dimension; j++)
        {
            if (i != j)
            {
                double ratio = matrix[j][i] / matrix[i][i];
                for (int k = 0; k < 2 * dimension; k++)
                {
                    matrix[j][k] = matrix[j][k] - ratio * matrix[i][k];
                }
            }
        }
    }
    for (int i = 0; i < dimension; i++)
    {
        for(int j=dimension; j<2*dimension; j++)
        {
            matrix[i][j] = matrix[i][j]/matrix[i][i];
        }
    }
    printf("Inverse Matrix:\n");
    for(int i = 0; i < dimension; i++)
    {
        for(int j=dimension; j<2*dimension; j++)
        {
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char **argv)
{
    int dimension;
    printf("Enter dimension:\n");
    scanf("%d", &dimension);
    printf("Enter Coefficient matrix:\n");
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            printf("Enter matrix[%d][%d]: ", i, j);
            scanf("%lf", &matrix[i][j]);
        }
    }
    AugmentingIdentityMatrix(dimension, matrix);
    GaussJordanElimination(dimension, matrix);
    return 0;
}
