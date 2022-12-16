#include <iostream>
using namespace std;
int a[100][100], dp[100][100];

int main()
{
    int n = 0;
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }

    dp[0][0] = a[0][0];

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + a[i][j];
        }
    }


    // for(int i = 1; i < n; i++)
    // {
    //     for(int j = 0; j <= i; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for(int i = 0; i < n; i++)
    {
        ans = max(ans, dp[n-1][i]);
    }

    cout << ans << endl;

    system("pause");
    return 0;
}