#include <iostream>
using namespace std;

/*
小蓝正在拷贝一份文件，他现在已经拷贝了 t 秒时间，已经拷贝了 c 字节，文件总共有 s 字节，如果拷贝是匀速进行的，请问小蓝大概还需要拷贝多少秒？
*/

int main()
{
    int t = 0, c = 0, s = 0, result = 0;
    cin >> t >> c >> s;
    result = (s - c) * t / c;
    cout << result << endl;
    system("pause");
    return 0;
}