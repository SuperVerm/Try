#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>

/*
一个字符串如果从左向右读和从右向左读相同，则称为一个回文串，例如 lanqiaoaiqnal 是一个回文串。
小蓝有一个字符串，请将这个字符串右边加上一些字符，使其成为一个回文串。
如果有多种方案，请输出最短的回文串。
*/

bool isHuiWen (string s)
{
    int i = 0;
    int n = s.size();
    do
    {
        if(s[i] != s[n-i-1])
        {
            return false;
        }
        i++;
    }while(i > n/2);
    return true;
}

string rev(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string huiWen,ans, temp;
    cin >> huiWen;
    if(isHuiWen(huiWen))
    {
        cout << huiWen << endl;
    }
    else
    {
        for(int i = 0; i < huiWen.size(); i++)
        {
            temp = huiWen.substr(0, i);
            ans = huiWen + rev(temp);
            if(isHuiWen(ans))
            {
                cout << ans << endl;
                break;
            }
        }
    }
    system("pause");
    return 0;
}