#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int main()
{   
    vector <int> seq[100000];
    int interval = 100000;
    int ans;
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        seq->push_back(temp);
    }
    sort(seq->begin(), seq->end());

    for(auto i = seq->begin(); i < seq->end(); i++)
    {
        interval = min(interval, *i - *(i-1));
    }

    if(interval != 0)
    {
        ans = (*(seq->end()-1) - *(seq->begin())) / interval + 1;
    }
    else
    {
        ans = n;
    }
   

    cout << ans << endl;

    system("pause");
    return 0;
}