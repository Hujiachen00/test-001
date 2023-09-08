#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int ran = rand()%100;
    int i =0;
    int gus=0;
    while (i<=10)
    {
        gus = 0;
        cout << "输入一个在0~99之间的数" << endl;
        cin >> gus;

        if (gus>ran)
            {
            cout << "你猜大了！" << endl;
            }
        else if (gus<ran)
        {
            cout <<"你猜小了！" << endl;
        }
        else
            {
                cout <<"你才对了！" << endl;
                i = 100;
            }
        i++;
    };
    if (i!=101)
    {
        cout << "你猜了10次都没有猜对!正确答案是 " << ran << endl;
    }
    
    return 0;
}
