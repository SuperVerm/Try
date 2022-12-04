#include <iostream>
using namespace std;

/*  8518 是一个非常特殊的数，如果把这个数看成 16 进制数，它的值为 (8518)16=8*16*16*16+5*16*16+1*16+8=34072，而 34072 正好是 8518 的整数倍。
　　9558 也是这样一个数，当看成 16 进制时是 38232。
　　其实长度为 1 的数 0 到 9 都满足看成 16 进制后是自己的整数倍（1倍）。
　　请问，除开长度为 1 的数，最小的满足这样条件的数是多少？*/

int main()
{
    //长度等于4
    for(int n = 10; n < 10000 ; n++)
    {
        int geWei = n % 10;
        int shiWei = n % 100 / 10;
        int baiWei = n / 100 % 10;
        int qianWei = n / 1000;
        
        int num = geWei + shiWei * 16 + baiWei * 16 * 16 + qianWei * 16 * 16 * 16;
        if(num % n == 0)
        {
            cout << n << endl;  //1038
            break;
        }
    }


    system("pause");
    return 0;
}