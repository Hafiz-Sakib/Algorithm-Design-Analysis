#include <bits/stdc++.h>
using namespace std;

// Function to solve 0/1 knapsack problem
int knapsack(int W, const vector<int> &wt, const vector<int> &val)
{
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= W; w++)
        {
            if (wt[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - wt[i - 1]] + val[i - 1]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Printing the resultant table
    cout << "Resultant Table (0/1 Knapsack Table):" << endl;
    cout << "----------------------------------------------" << endl;
    cout << setw(6) << " ";
    for (int w = 0; w <= W; w++)
    {
        cout << setw(6) << w;
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << setw(4) << i << " |";
        for (int w = 0; w <= W; w++)
        {
            cout << setw(6) << dp[i][w];
        }
        cout << endl;
    }
    cout << "----------------------------------------------" << endl;

    return dp[n][W];
}

int main()
{
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 10; // Knapsack capacity

    cout << "Maximum value that can be obtained: " << knapsack(W, wt, val) << endl;

    return 0;
}
