#include <iostream>
using namespace std;

char m[100][100];

int find(char a[100][100], int i, int j)
{
    int sum = 0;
    if(
    (a[i][j] == a[i][j + 1] == a[i + 1][j]) || 
    (a[i][j] == a[i][j + 1] == a[i + 1][j + 1]) ||
    (a[i][j] == a[i][j + 1] == a[i - 1][j]) ||
    (a[i][j] == a[i][j + 1] == a[i - 1][j + 1])
    )
    {
        sum++;
    }
    
    return sum;
}

int main()
{
    //读入数据
    int x = 0, y = 0;
    cin >> x >> y;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cin >> m[i][j];
        }
    }

    //处理数据
    int sum = 0;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            int num = find(m, i, j);
            sum += num;
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}