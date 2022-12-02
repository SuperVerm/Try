#include <iostream>
using namespace std;

char t[100][20];
int energy[100][2];

int main()
{
    //输入数据
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> t[i] >> energy[i][0] >> energy[i][1];
    }
    //处理数据
    int sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        int firstTime = 3600 * (int(t[i][0]) * 10 + int(t[i][1]))
        + 60 * (int(t[i][3]) * 10 + int(t[i][4]))
        + (int(t[i][6]) * 10 + int(t[i][7])) ;
        int lastTime =  3600 * (int(t[i + 1][0]) * 10 + int(t[i + 1][1]))
        + 60 * (int(t[i + 1][3]) * 10 + int(t[i + 1][4]))
        + (int(t[i + 1][6]) * 10 + int(t[i + 1][7]));

        int time = lastTime - firstTime;
        sum += time * energy[i][0] * energy[i][1];
    }
    cout << sum;
    system("pause");
    return 0;
}