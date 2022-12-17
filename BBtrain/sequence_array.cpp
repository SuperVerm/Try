#include <iostream>
using namespace std;
#include <algorithm>

int a[100000];

int main()
{
    int n, ans, interval = 100000;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i = 1; i < n; i++)
    {   
        int temp = a[i] - a[i-1];
        interval = min(interval, temp);
    }

    //记住判断等差为0的情况！！！
    if(interval != 0)
    {
        ans = (a[n-1] - a[0]) / interval + 1;
    }
    else
    {
        ans = n;
    }
    

    cout << ans << endl;

    system("pause");
    return 0;
}