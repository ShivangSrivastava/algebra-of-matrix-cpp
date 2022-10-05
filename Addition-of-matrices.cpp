#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "No. of matrices to add: ";

    // No of matrix, no of row, no of column
    int n, row, column;
    cin >> n;

    
    cout << "No. of Rows: ";
    cin >> row;

    cout << "No. of Columns: ";
    cin >> column;

    // Resultant Matrix
    int result[row][column];

    // making result to zero matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result[i][j] = 0;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        cout << "For " << k << "th Matrix element at " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "(" << i << ", " << j << ") : ";
                int value;
                cin >>value;
                result[i][j] = result[i][j] + value;
            }
        }
        cout << endl;
    }
    cout << "Resultant matrix is: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}