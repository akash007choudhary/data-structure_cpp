#include <bits/stdc++.h>
using namespace std;

void generate(int index,int count,int k , vector<int>& arr, vector<int>& current) {

    // Base case
    if (index == arr.size()) {
        int sum =0 ;
        for (int x : current) {
            sum +=x;
        }
        if(sum==k){
            count++;
        }
        return;
    }

    // 1. Pick the current element
    current.push_back(arr[index]);
    generate(index + 1,count,3, arr, current);

    // Backtrack
    current.pop_back();

    // 2. Do not pick the current element
    generate(index + 1,count,3, arr, current);
}

int main() {

    vector<int> arr = {1, 2, 3};
    vector<int> current;

    generate(0,0,3, arr, current);

    return 0;
}