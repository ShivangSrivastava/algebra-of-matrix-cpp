#include <bits/stdc++.h>
using namespace std;

int main()
{
    int order;
    cout << "Order : ";
    cin >> order;

    int matrix[order][order];
    
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cout << "Value at (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "Original Matrix " << endl;
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
        cout << endl;
    }

    cout << "Transversed Matrix " << endl;
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
