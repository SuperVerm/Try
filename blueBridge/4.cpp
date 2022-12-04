#include <iostream>
using namespace std;

/* 小蓝有一个 30 行 60 列的数字矩阵，矩阵中的每个数都是 0 到 9 之间的数字。*/
int a[30][60] = {
    1,7,4,0,9,4,8,8,2,4,5,5,1,7,1,1,5,2,7,6,1,4,2,3,2,2,1,6,8,5,7,6,1,8,9,2,7,9,5,4,3,1,2,3,3,4,1,1,3,8,7,4,2,7,7,9,3,1,9,8,
    6,5,0,2,8,6,0,2,4,8,6,5,0,9,0,0,6,1,3,8,9,3,4,4,6,0,6,6,1,8,4,9,6,3,7,8,8,2,9,1,3,5,9,8,4,0,7,6,3,6,1,5,4,2,0,9,7,3,7,2,
    6,0,1,6,5,7,5,4,1,2,0,0,1,4,6,0,7,1,7,7,7,7,3,3,5,9,9,8,1,8,2,6,6,0,3,8,0,1,2,5,0,9,4,7,8,3,5,1,2,0,1,6,4,0,6,1,8,9,8,4,
    1,4,3,9,8,8,0,8,7,7,8,3,8,3,7,1,0,7,3,4,9,6,5,1,0,9,9,6,8,3,4,8,4,9,9,2,5,5,3,3,3,7,4,3,8,0,8,8,0,6,8,1,9,8,9,7,2,2,8,2,
    8,9,0,7,8,1,5,8,6,1,2,4,2,5,8,6,2,6,5,3,9,2,4,6,1,8,2,1,1,9,7,6,2,9,5,2,0,0,3,9,1,8,1,9,5,3,2,5,2,5,8,6,7,7,2,2,9,4,1,9,
    6,9,8,2,5,5,4,9,1,2,5,0,8,3,9,3,9,6,7,9,9,7,6,9,3,5,7,6,6,5,8,2,5,4,4,1,6,1,6,3,3,5,5,3,2,8,2,5,3,6,1,8,6,2,1,4,6,2,9,1,
    5,0,3,6,4,9,2,9,3,4,4,0,5,9,6,3,4,2,8,8,7,5,8,1,2,5,7,4,4,4,4,4,2,9,3,0,7,7,8,7,3,0,3,8,2,5,2,0,3,7,2,9,7,5,3,4,3,2,1,1,
    3,2,5,3,5,1,2,2,2,6,4,0,7,0,3,4,0,0,5,3,1,0,6,7,5,0,0,4,5,4,9,5,6,4,8,2,1,6,8,3,1,4,8,4,9,2,0,7,0,6,0,7,0,5,6,7,3,8,4,9,
    2,6,5,7,7,4,5,7,9,8,3,0,2,2,3,6,7,1,5,5,4,0,2,6,0,6,1,1,1,7,3,0,0,4,8,3,0,1,2,9,0,3,8,8,5,7,7,0,8,9,3,0,7,4,7,8,3,7,1,0,
    0,8,3,4,5,0,1,4,5,6,2,0,3,5,6,6,6,7,6,7,7,1,9,1,6,2,7,2,7,6,5,1,3,9,9,5,9,2,6,5,3,2,4,4,4,2,7,9,2,3,7,3,1,5,7,8,5,8,3,2,
    4,1,1,5,9,5,1,0,6,4,5,3,0,8,9,1,3,4,7,4,6,3,6,5,2,8,1,0,3,1,5,5,2,2,1,7,4,8,2,3,6,3,0,3,5,2,8,0,7,2,2,5,9,1,0,8,5,0,7,9,
    0,5,3,4,1,0,4,8,5,9,2,5,4,1,3,9,5,8,2,7,9,6,1,7,7,1,9,0,3,4,1,7,5,3,3,2,4,1,2,9,0,8,7,4,5,6,8,0,7,7,4,3,1,3,6,3,0,1,9,0,
    4,2,9,3,1,4,8,2,0,5,5,9,3,2,8,7,4,8,1,4,3,5,5,2,6,8,9,2,9,5,9,4,5,0,5,8,8,0,1,3,2,2,2,7,0,3,1,3,3,7,0,9,5,5,8,3,7,8,3,7,
    9,3,9,1,8,2,8,0,1,8,4,8,6,0,9,3,0,0,8,7,6,3,5,6,5,8,3,9,4,8,3,9,7,6,4,5,8,6,1,5,5,1,9,6,4,5,4,2,5,3,2,6,8,2,6,6,3,9,4,5,
    6,2,5,3,5,6,6,1,4,4,6,2,6,8,2,5,5,1,0,1,5,1,7,6,0,0,2,4,3,3,6,2,8,2,3,4,3,4,3,6,8,4,7,3,9,8,0,0,8,8,0,5,1,4,3,6,3,9,2,1,
    9,8,2,3,4,0,2,3,1,9,8,9,8,9,1,3,5,1,4,2,5,3,8,9,2,8,7,0,1,4,8,1,9,3,5,9,7,9,8,0,1,4,7,5,5,5,0,9,2,8,2,4,5,0,4,4,0,5,1,1,
    5,9,0,8,3,8,7,2,6,9,3,8,1,0,3,3,8,4,8,0,1,5,4,1,3,7,3,5,8,5,6,9,0,8,9,3,6,0,6,9,7,8,9,4,1,5,6,6,6,6,6,7,1,4,0,6,1,2,1,4,
    9,5,2,3,4,1,5,2,3,1,6,8,8,2,7,7,1,2,6,0,4,9,4,6,0,3,6,2,4,5,8,8,1,2,1,4,9,8,2,4,5,2,9,9,8,3,8,6,9,8,6,6,2,3,8,2,6,2,7,5,
    7,8,2,7,8,0,2,0,8,9,2,8,2,0,5,5,2,7,6,7,8,7,8,1,6,0,9,5,8,9,0,0,0,7,2,5,5,2,1,4,8,6,4,6,8,9,8,3,5,5,1,5,5,8,4,0,5,4,7,2,
    1,4,9,9,0,3,0,3,5,0,7,6,7,8,3,6,4,4,1,9,5,5,7,4,7,3,4,0,8,8,1,5,2,3,2,4,6,6,6,2,9,0,4,9,3,1,1,9,9,5,5,5,6,0,5,9,4,6,3,4,
    9,0,5,3,9,1,2,8,8,1,8,6,0,2,4,9,0,2,2,1,5,4,4,4,2,5,0,4,2,1,2,7,7,9,5,5,4,0,3,4,1,2,2,9,8,2,2,7,8,5,8,3,9,4,4,6,9,8,5,6,
    6,0,7,2,7,2,6,4,7,1,3,2,1,6,3,8,3,2,8,6,0,1,2,6,0,5,4,6,7,9,3,4,7,8,8,1,6,3,8,7,6,1,7,2,3,7,8,5,8,5,8,7,3,3,1,0,8,1,0,9,
    2,4,9,1,5,7,3,3,4,2,2,0,1,2,7,7,0,2,4,1,0,3,7,3,9,5,9,7,2,0,2,8,6,7,0,8,1,8,3,0,3,6,2,0,2,8,4,1,8,3,7,5,8,1,7,0,4,8,8,1,
    3,6,7,8,9,5,5,5,6,6,3,0,0,8,8,2,3,0,6,5,0,9,7,2,2,8,2,9,4,4,8,2,7,2,5,8,4,7,3,9,5,1,9,0,2,8,3,1,4,3,1,0,4,0,7,9,0,8,1,4,
    0,7,9,5,3,8,2,3,2,1,0,4,0,7,5,9,0,5,1,2,0,9,8,9,1,7,3,3,0,7,6,6,0,2,8,9,8,9,9,9,4,2,0,8,7,8,7,3,0,7,6,4,2,1,9,1,6,0,3,3,
    6,2,2,1,4,3,2,6,0,5,4,9,6,0,8,2,7,4,0,7,6,0,1,2,9,3,8,5,1,5,6,6,8,8,9,8,7,0,7,9,1,5,8,6,3,9,4,5,3,8,2,3,9,4,8,5,1,3,2,8,
    1,6,4,6,7,7,9,6,4,1,9,2,6,3,1,5,9,7,0,2,6,1,7,6,2,5,3,4,0,7,5,5,3,1,8,8,8,0,1,7,5,0,5,9,0,9,3,5,4,2,7,2,6,7,2,2,0,1,1,7,
    5,9,1,8,1,7,8,6,6,9,9,2,6,6,5,8,4,0,3,7,8,3,1,1,2,5,7,6,2,1,6,1,1,5,7,4,8,5,6,4,9,8,4,3,2,5,3,8,3,2,7,0,6,8,0,1,1,9,5,3,
    6,3,1,5,3,4,0,3,1,7,9,0,3,5,2,9,1,2,6,1,7,0,1,5,2,2,9,0,5,1,8,3,6,8,8,6,1,6,6,7,0,4,9,8,9,4,9,8,7,5,6,4,8,6,8,7,8,0,9,5,
    6,9,0,0,1,3,5,5,8,0,1,7,7,4,6,7,0,7,4,1,2,1,8,3,5,7,1,4,7,6,8,2,3,0,2,7,8,8,5,9,7,1,3,4,7,1,3,7,1,2,7,5,3,4,4,5,5,1,4,1
};
/*现在小蓝想从这个矩阵的第一行第一列画一条折线到第 30 行 60 列，线只能沿水平向右走或竖直向下走，只能在有数字的地方拐弯。小蓝想知道，这样一条线经过的数字的和最大是多少。 */

int sum[30][60] = {};

void bfs(int a[30][100], int i, int j)
{
    if(sum[i][j] + a[i][j] > sum[i][j])
    {
        sum[i][j] += a[i][j];
    }
    bfs(a, i, j + 1);
    bfs(a, i + 1, j);
}

int main()
{
    bfs(&a, 0, 0);
  
    cout << sum[29][59] << endl;
    system("pause");
    return 0;
}