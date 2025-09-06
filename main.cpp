#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Матрица A 2x3
    vector<vector<int>> A = {{1, 2, 3},
                             {4, 5, 6}};

    // Матрица B 3x2
    vector<vector<int>> B = {{7, 8},
                             {9, 10},
                             {11, 12}};

    int n = A.size();    // строки A
    int m = B[0].size(); // столбцы B
    int p = B.size();

    vector<vector<int>> C(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Result matrix C:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
