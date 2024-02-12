#include <bits/stdc++.h>
using namespace std;

vector<int> ss_value = {3, 6, 5, 8, 3, 2, 6, 4, 2, 3, 3, 7, 7, 6, 5, 2, 6};
vector<int> cost = {9, 7, 3, 8, 11, 6, 17, 2, 3, 11, 19, 5, 5, 12, 13, 6, 8};
int budget = 15; // Tourists Budget

int knapsack(int W)
{
    int n = cost.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= W; w++)
        {
            if (cost[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - cost[i - 1]] + ss_value[i - 1]);
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
    cout << "Maximum Site-Seeing ss_valueue : " << knapsack(budget) << endl;

    return 0;
}
