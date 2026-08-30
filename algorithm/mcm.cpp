
// brut force 

#include <iostream>
#include <climits>
using namespace std;

int mcm(int arr[], int i, int j)
{ 
    // base case only a elemenet (matrix sinngle dimension no meaning)

    if (i == j)
        return 0;

    int mini = INT_MAX;

    // all possible configuration of multiplications
    for (int k = i; k < j; k++)
    {
        // this is teh formula 
        int cost = mcm(arr, i, k)
                 + mcm(arr, k + 1, j)
                 + arr[i - 1] * arr[k] * arr[j];

        mini = min(mini, cost);
    }

    return mini;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    cout << "Min cost: " << mcm(arr, 1, n - 1);

    return 0;
}



// dynamic programming 
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int mcm(int arr[], int n)
{
    // dp table
    vector<vector<int>> dp(n, vector<int>(n, 0));
    // dp[i][j] = min cost to multiply matrices from i to j

    // len = chain length
    for (int len = 2; len < n; len++)
    {
        for (int i = 1; i < n - len + 1; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++)
            {
                int cost = dp[i][k] 
                         + dp[k + 1][j] 
                         + arr[i - 1] * arr[k] * arr[j];

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    } 

    return dp[1][n - 1];
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    cout << "Min cost: " << mcm(arr, n);

    return 0;
}