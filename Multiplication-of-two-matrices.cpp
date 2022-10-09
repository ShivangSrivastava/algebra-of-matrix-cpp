#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row_a, column_a, row_b, column_b;
    cout << "No of row in matrix 'A': ";
    cin >> row_a;
    cout << "No of column in matrix 'A': ";
    cin >> column_a;
    int matrix_a[row_a][column_a];

    cout << "No of row in matrix 'B': ";
    cin >> row_b;
    cout << "No of column in matrix 'B': ";
    cin >> column_b;
    int matrix_b[row_b][column_b];

    bool axb=0, bxa=0;

    if (row_a == column_b)    bxa = 1;
    if (row_b == column_a)    axb = 1;

    if (!(axb) && !(bxa))
    {
        cout << "Neither 'A x B' nor 'B x A' possible" << endl;
    }
    else
    {
        cout << "Value of element in Matrix A: " << endl;
        for (int i = 0; i < row_a; i++)
        {
            for (int j = 0; j < column_a; j++)
            {
                cout << "(" << i << ", " << j << ") : ";
                cin >> matrix_a[i][j];
            }
        }

        cout << "Value of element in Matrix B: " << endl;
        for (int i = 0; i < row_b; i++)
        {
            for (int j = 0; j < column_b; j++)
            {
                cout << "(" << i << ", " << j << ") : ";
                cin >> matrix_b[i][j];
            }
        }
        if (axb)
            {
                int result[row_a][column_b];
                int sum = 0;

                for (int i = 0; i < row_a; i++)
                {
                    for (int j = 0; j < column_b; j++)
                    {
                        for (int k = 0; k < row_b; k++)
                        {
                            sum = (sum + (matrix_a[i][k] * matrix_b[k][j]));
                        }
                        result[i][j] = sum;
                        sum = 0;
                    }
                }

                cout << "Resultant matrix for 'A x B': " << endl;
                for (int i = 0; i < row_a; i++)
                {
                    for (int j = 0; j < column_b; j++)
                    {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
            }
        if (bxa)
        {
            int result[row_b][column_a];
            int sum = 0;

            for (int i = 0; i < row_b; i++)
            {
                for (int j = 0; j < column_a; j++)
                {                
                    for (int k = 0; k < row_a; k++)
                    {
                        sum = (sum + (matrix_b[i][k] * matrix_a[k][j]));
                    }
                    result[i][j] = sum;
                    sum = 0;
                }
            }

            cout << "Resultant matrix for 'B x A': " << endl;
            for (int i = 0; i < row_b; i++)
            {
                for (int j = 0; j < column_a; j++)
                {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
