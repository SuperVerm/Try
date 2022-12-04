#include <iostream>
using namespace std;
#include <cstring>

/*
一个字符串如果从左向右读和从右向左读相同，则称为一个回文串，例如 lanqiaoaiqnal 是一个回文串。
小蓝有一个字符串，请将这个字符串右边加上一些字符，使其成为一个回文串。
如果有多种方案，请输出最短的回文串。
*/

int main()
{
    string huiWen;
    cin >> huiWen;
    int n = huiWen.size();

    //判断是否为回文串
    for(int i = 0; i <= n/2; i++)
    {
        if(huiWen[i] == huiWen[n - i -1])
        {
            if(i >= n/2)
            {
                cout << huiWen << endl;
                system("pause");
                return 0;
            }
            continue;
        }
        break;
    }

    //补充
    int index = 0;
    for(int i = 1; i < n; i++)
    {
        int left = i - 1; 
        int right = i + 1;
        for(; left >= 0 && right < n; left--, right++)
        {
            if(huiWen[left] == huiWen[right])
            {
                if(left == 0 || right == n - 1)
                {
                    index = i;
                }
                continue;
            }
            break;
        }
        if(index != 0)
        {
            break;
        }
    }

    //cout << index << endl;
    
    if(index == 0)
    {
        for(int i = 0; i < n * 2 - 1; i++)
        {
            if(i < n)
            {
                cout << huiWen[i];
            }
            else
            {
                cout << huiWen[2 * (n - 1) - i];
            }
        }
    }
    else
    {
        for(int i = 0; i < index * 2 + 1; i++)
        {
            if(i < index)
            {
                cout << huiWen[i];
            }
            else
            {
                cout << huiWen[n + 1 - i];
            }
        }
    }
    

    system("pause");
    return 0;
}