#include <iostream>
#include <vector>
#include <queue> // queue (it is different as stack. It Output(pop) the value that first input(puch))
#include <functional>
using namespace std;

int main()
{
    int num;
    priority_queue <int, vector<int>, greater<int> > Sort_num;
    cout << "Enter numbers (exit : Any character): ";
    while(cin >> num)
    {
        if (cin.fail() == 1)
        {
            break;
        }
        else
        {
            Sort_num.push(num);
        }
    }
    while(!Sort_num.empty())
    {
        cout << Sort_num.top() << ' ';
        Sort_num.pop();
    }
    cout << endl;

    return 0;
}