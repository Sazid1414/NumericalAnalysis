#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num_of_row, num_of_column;
    cin >> num_of_row >> num_of_column;
    
    double matrix[num_of_row][num_of_column+1];

    for (int i = 0; i < num_of_row; i++) {
        for (int j = 0; j <= num_of_column; j++) {
            cin >> matrix[i][j];
        }
    }

    
    for (int i = 0; i < num_of_row; i++) {
          for (int i = 0; i < num_of_row; i++)
    {
        array[i] = matrix[i][0];
        for (int i = 0; i < num_of_row; i++)
        {
            for (int j = 0; j <= num_of_column; j++)
            {
                if (i == j && matrix[i][j] == 0)
                {
                    for (int k = 0; k < num_of_column; k++)
                    {
                        double temporary;
                        temporary = matrix[i + 1][k];
                        matrix[i + 1][k] = matrix[i][k];
                        matrix[i][k] = temporary;
                    }
                }
                for (int k = i - 1; k <= num_of_column; k++)
                {
                    matrix[j][k] = matrix[i - 1][i - 1] / matrix[j][i - 1] - matrix[j][k];
                }
            
            }
        }
    }
        
        int pivot_row = i;
        for (int j = i + 1; j < num_of_row; j++) {
            if (abs(matrix[j][i]) > abs(matrix[pivot_row][i])) {
                pivot_row = j;
            }
        }
        if (pivot_row != i) {
         swap(matrix[i], matrix[pivot_row]);
            // double temporary;
            // temporary=matrix[i];
            // matrix[i]=matrix[pivot_row];
            // matrix[pivot_row]=temporary;
        }
        double pivot = matrix[i][i];
        for (int j = i; j <= num_of_column; j++) {
            matrix[i][j] /= pivot;
        }
        for (int j = 0; j < num_of_row; j++) {
            if (j != i) {
                double factor = matrix[j][i];
                for (int k = i; k <= num_of_column; k++) {
                    matrix[j][k] -= factor * matrix[i][k];
                }
            }
        }
    }

    // Print the result
    for (int i = 0; i < num_of_row; i++) {
        for (int j = 0; j <= num_of_column; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
