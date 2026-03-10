#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        int minHeight = heights[i];

        for (int j = i; j < n; j++) {
            // Update minimum height in the range [i, j]
            minHeight = min(minHeight, heights[j]);

            // Calculate area between i and j
            int width = j - i + 1;
            int area = minHeight * width;

            maxArea = max(maxArea, area);
        }
    }

    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Largest Rectangle Area: " << largestRectangleArea(heights) << endl;
    return 0;
} 



//  optimised apprroch#include <iostream>
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//     int n = heights.size();
//     vector<int> left(n,0);   // left smaller
//     vector<int> right(n,0);
//     stack<int> s;

//     // right smaller
//     for(int i = n-1;i>=0;i--){
//         while(s.size()>0&& heights[s.top()]>=heights[i]){
//             s.pop();
//         }
//         right[i]=s.empty()?n:s.top();    // n default value rakhen hai because jab koi right bounadry nhi milega to hame jo last walll bar hoga use hi rkhna padega na boundery but in case if left boundry hame -1 hi lena hai as wo left ka default hoga this was the edge case ;
//         s.push(i);
//     }
//     while(!s.empty()){
//         s.pop();
//     }
//     // left boundry 
//      for(int i = 0;i<n;i++){
//         while(s.size()>0&& heights[s.top()]>=heights[i]){
//             s.pop();
//         }
//         left[i]=s.empty()?-1:s.top();
//         s.push(i);
//     }

//     int ans= 0 ;
//      for(int i = 0;i<n;i++){
//         int width = right[i]-left[i]-1;   formula for width;
//         int currarea= heights[i]* width;
//         ans= max(ans, currarea);
//      }
// return ans;
    
//     }
// };