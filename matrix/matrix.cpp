#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    int a[100][100] = {1};
    for(int i = 1; i < 100; i++)
    {
       a[i][0] = i + 1;
    }
    for(int i = 0; i < 100; i++)
    {
       for(int j = 1; j < 100; j++)
       {
        a[i][j] = a[i][j - 1] + 2;
       }
    }

    

    system("pause");
    return 0;
}