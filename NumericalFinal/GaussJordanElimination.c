#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void GaussJordanElimination(int dimension, double matrix[dimension][dimension + 1]) {
    for (int i = 0; i < dimension; i++) {
        if (matrix[i][i] == 0.0) {
            printf("Mathematical Error! Division by zero.\n");
            return;
        }
        for (int j = 0; j < dimension; j++) {
            if (i != j) {
                double ratio = matrix[j][i] / matrix[i][i];
                for (int k = 0; k <= dimension; k++) {
                    matrix[j][k] = matrix[j][k] - ratio * matrix[i][k];
                }
            }
        }
    }
}

void printSolution(int dimension, double matrix[dimension][dimension + 1], double solution[dimension]) {
    for (int i = 0; i < dimension; i++) {
        if (matrix[i][i] == 0.0) {
            printf("Mathematical Error! Division by zero.\n");
            return;
        }
        solution[i] = matrix[i][dimension] / matrix[i][i];
    }
    printf("Solution:\n");
    for (int j = 0; j < dimension; j++) {
        printf("X[%d]: %lf\n", j, solution[j]);
    }
}

int main(int argc, char **argv) {
    int dimension;
    printf("Enter dimension:\n");
    scanf("%d", &dimension);

    double matrix[dimension][dimension + 1];
    printf("Enter Augmented matrix:\n");
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension + 1; j++) {
            printf("Enter matrix[%d][%d]: ", i, j);
            scanf("%lf", &matrix[i][j]);
        }
    }

    GaussJordanElimination(dimension, matrix);
    double solution[dimension];
    printSolution(dimension, matrix, solution);
    return 0;
}
