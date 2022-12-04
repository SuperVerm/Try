#include <iostream>
using namespace std;

int main()
{
    int n;
    int h, m, s, u, i, _h = 0, _m = 0, _s = 0, _u, _i;
    char mao;
    cin >> n;
    int sum = 0;
    for(int j = 0; j < n; j++)
    {
        cin >> h >> mao >> m >> mao >> s >> u >> i;
        if(j > 0)
        {
        sum += ((h * 3600 + m * 60 + s) - (_h * 3600 + _m * 60 + _s)) * _u * _i;
        }
        _h = h;
        _m = m;
        _s = s;
        _u = u;
        _i = i;
    }
    
    cout << sum << endl;

    system("pause");
    return 0;
}