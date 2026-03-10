// its little tough logic for stack implementation  so you need to revise this time to time even logic is a bit tough :) 



#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{

    vector<int> price = {100, 80, 60, 70, 60, 75, 85};

    vector<int> ans(price.size(), 0);      // ans vector ka size is same as the price vector and all values are initially 0 
    stack<int> s;

    for (int i = 0; i < price.size(); i++)
    {
        while (s.size() > 0 && price[s.top()] <= price[i])     //jab tak prices chote hai unhe remove krenge pop tab tak jab tak bada value na mil jaye 
        {
            s.pop();
        }
        if (s.empty())                  // if stack empty that corner case or the i = 0 wala case 
        {
            ans[i] = i + 1;             // logic ye hoga 
        }
        else
        {
            ans[i] = i - s.top();          // normal wala case (span = i - prev_high )wala logic
        }

        s.push(i);                        // then jo har iteration ke baad ka index ko push krna hai!
    }

    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}