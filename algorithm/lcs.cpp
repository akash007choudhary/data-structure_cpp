#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void lcs(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();

    // this makes a dp table !
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1; // diagonal wale ka plus 1
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]); // max of  left or right
            }
        }
    }

    int i = m, j = n;
    string ans = "";

    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            ans += s1[i - 1];
            // yeh kr rhe as we need to move diagonally up na jab same elemenmbs hai
            i--;
            j--;
        }
        else
        {
            // jab dono same honmge tab j-- hi ho jayega automatically 
            (dp[i - 1][j] > dp[i][j - 1]) ? i-- : j--;
        }
    }

    // as reverse ordermain aa yega n 

    reverse(ans.begin(), ans.end());

    cout << "Length of LCS: " << dp[m][n] << endl;
    cout << "LCS: " << ans << endl;

    
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    lcs(s1, s2);

    return 0;
}





















//                                  BRUTFORCE APPROACH

#include <iostream>
using namespace std;

int lcs(string s1, string s2, int i, int j)
{
    // base case
    // "Agar koi bhi string khatam → answer 0" 
    if (i == s1.length() || j == s2.length())
        return 0;

    // match
    if (s1[i] == s2[j])
        return 1 + lcs(s1, s2, i + 1, j + 1);

    // not match
    return max(lcs(s1, s2, i + 1, j),
               lcs(s1, s2, i, j + 1));
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << "LCS Length: " << lcs(s1, s2, 0, 0);

    return 0;
}