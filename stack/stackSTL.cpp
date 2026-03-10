#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;      // this is the standard template to implemenet stack in cpp
    s.push(10);
    s.push(20);
    s.push(30);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}