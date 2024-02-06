#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number of multiplications needed to multiply a chain of matrices
int matrixChainOrder(const vector<int> &dims)
{
    int n = dims.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // dp[i][j] stores the minimum number of scalar multiplications needed to compute the matrix product A[i] * A[i+1] * ... * A[j]

    // For chains of length 1, the cost is 0 as there is only one matrix
    for (int i = 1; i < n; i++)
    {
        dp[i][i] = 0;
    }

    // L is chain length.
    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                int cost = dp[i][k] + dp[k + 1][j] + dims[i - 1] * dims[k] * dims[j];
                if (cost < dp[i][j])
                {
                    dp[i][j] = cost;
                }
            }
        }
    }

    return dp[1][n - 1]; // Return the minimum number of multiplications needed for the full chain
}

int main()
{
    vector<int> dims = {10, 30, 5, 60};
    cout << "Minimum number of multiplications needed: " << matrixChainOrder(dims) << endl;
    return 0;
}
