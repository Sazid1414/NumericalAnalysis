#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void GaussElimination(int dimension, double matrix[dimension][dimension + 1])
{
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            if (j > i)
            {
                double c = matrix[j][i] / matrix[i][i];
                for (int k = 0; k <= dimension; k++)
                {
                    matrix[j][k] -= c * matrix[i][k];
                }
            }
        }
    }
}
void BackSubstitution(int dimension, double matrix[dimension][dimension + 1], double solution[dimension])
{
    for (int i = dimension - 1; i >= 0; i--)
    {
        solution[i] = matrix[i][dimension];
        for (int j = i + 1; j < dimension; j++)
        {
            solution[i] =solution[i]-matrix[i][j] * solution[j];
        }
        solution[i] /= matrix[i][i];
    }
}

int main(int argc, char **argv)
{
    int dimension;
    printf("Enter dimension:\n");
    scanf("%d", &dimension);

    double matrix[dimension][dimension + 1];
    printf("Enter Augmented matrix:\n");
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension + 1; j++)
        {
            printf("Enter matrix[%d][%d]:\n", i, j);
            scanf("%lf", &matrix[i][j]);
        }
    }

    GaussElimination(dimension, matrix);
    double solution[dimension];
    BackSubstitution(dimension, matrix, solution);
    return 0;
}
