#include <iostream>
using namespace std;
#include <cstring>

/*
小蓝有 n 个单词，但是单词中有一些是重复的，请帮小蓝去除重复的单词。
*/

int main()
{
    string a[100];
    int n = 0;
    cin >> n;
    int count = n;
    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        for(int j = 0; j < n; j++)
        {
            if(a[j] == temp)
            {
                count--;
                break;
            }
        }
        a[i] = temp;
    }

    for(int i = 0; i < count; i++)
    {
        cout << a[i] << endl;
    }

    system("pause");
    return 0;
}