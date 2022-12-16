#include <iostream>
using namespace std;
int a[10000], t_max[10000];

int main()
{
    int n = 0;
    cin >> n;
    for(int i = 0; i <  n; i ++)
    {
        for(int j = 0; j < n; j++)
        {
            a[j]++;
        }
        if(a[i] > t_max[i])
        {
            t_max[i] = a[i];
        }
        a[i] = 0;
    }

    for(int i = n-2; i > 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            a[j]++;
        }
        if(a[i] > t_max[i])
        {
            t_max[i] = a[i];
        }
        a[i] = 0;
    }
    for(int i = 0; i <  n; i ++)
    {
        for(int j = 0; j < n; j++)
        {
            a[j]++;
        }
        if(a[i] > t_max[i])
        {
            t_max[i] = a[i];
        }
        a[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        cout << t_max[i] << endl;
    }

    system("pause");
    return 0;
}