#include <iostream>
using namespace std;

/* 小蓝有一个 30 行 60 列的数字矩阵，矩阵中的每个数都是 0 到 9 之间的数字。*/
int a[31][61] = {};
/*现在小蓝想从这个矩阵的第一行第一列画一条折线到第 30 行 60 列，线只能沿水平向右走或竖直向下走，只能在有数字的地方拐弯。小蓝想知道，这样一条线经过的数字的和最大是多少。 */

int sum[31][61] = {};


int main()
{
    for(int i = 1; i <= 30; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            char x;
            cin >> x;
            a[i][j] = x - '0';
        }
    }
    
    for(int i = 1; i <= 30; i++)
    {
        for(int j = 1; j <= 60; j++)
        {
            sum[i][j] = max(sum[i-1][j], sum[i][j-1]) + a[i][j];
        }
    }
    
    cout << sum[30][60] << endl;
    system("pause");
    return 0;
}