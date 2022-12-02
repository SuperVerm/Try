#include <iostream>
using namespace std;
#include <string.h>
int main()
{
  // 请在此输入您的代码
  int a[12][31]; //数组中未初始化的值不为0？
  memset(a, 0, sizeof(a));

  
  //初始化
  for(int i = 0; i < 31; i++)
  {
    a[0][i] = a[2][i] = a[4][i] = a[6][i] = a[7][i] = a[9][i] = a[11][i] = i + 1;
  }
  for(int i = 0; i < 30; i++)
  {
    a[3][i] = a[5][i] = a[8][i] = a[10][i] = i + 1;
  }
  //a[3][30] = a[5][30] = a[8][30] = a[10][30] = 0;
  for(int i = 0; i < 28; i++)
  {
    a[1][i] = i + 1;
  }
  //a[1][28] = a[1][29] = a[1][30] = 0;
  
    for(int i = 0; i < 12; i++)
  {
    for(int j = 0; j < 31; j++)
    {
        cout << a[i][j] << "  ";
    }
    cout << endl;
  }

  //计算
  int day = 1;
  int sum = 0;
  for(int i = 0; i < 12; i++)
  {
    for(int j = 0; j < 31; j++)
    {
      if(a[i][j] != 0)
      {
        if(a[i][j] %10 == 1 || day %7 == 1 || day %7 ==2)
        {
          sum++;
        }
        day++;
      }
    }
  }
  //输出结果
  cout << sum << endl;
  system("pause");
  return 0;
}
