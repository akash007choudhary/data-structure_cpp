//                            BRUTEFORCE APPROACH

// #include <iostream>
// #include <algorithm>

// using namespace std;
// int leftlargest(int arr[], int n)
// {
//     int leftmax = arr[0];
//     for (int i = 1; i < n - 1; i++)
//     {
//         leftmax = max(leftmax, arr[i]);
//     }
//     return leftmax;
// }
// int rightlargest(int arr[], int n)
// {
//     int rightmax = arr[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//     {
//         rightmax = max(rightmax, arr[i]);
//     }
//     return rightmax;
// }

// int main()
// {
//     int water = 0;

//     int arr[] = {4, 2, 0, 3, 2, 5};

//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//     {
//         water += max(0, min(leftlargest(arr, i), rightlargest(arr, i)) - arr[i]);
//         // the shortcut to not use another variable to store the value and then chek if the value is negative or not, like currwater appraoch .
//     }

//     cout << water << endl;
//     return 0;
// }


//                           OPTIMIZED APPROACH
//  its the same logic as bruteforce but we are storing the leftmax and rightmax in two arrays to avoid recomputation again and again, and sidhe unhe use krlenge ;
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int arr[] = {4, 2, 0, 3, 2, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int water = 0;

//     int leftmax[n], rightmax[n];

//     // Fill leftmax[]
//     leftmax[0] = arr[0];
//     for (int i = 1; i < n; i++)
//         leftmax[i] = max(leftmax[i - 1], arr[i]);

//     // Fill rightmax[]
//     rightmax[n - 1] = arr[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//         rightmax[i] = max(rightmax[i + 1], arr[i]);

//     // Calculate water trapped
//     for (int i = 0; i < n; i++)
//         water += max(0, min(leftmax[i], rightmax[i]) - arr[i]);

//     cout << water << endl;
//     return 0;
// }


//                         MOST OPTIMIZED APPROACH (2 POINTERS)

// a little confusing and tricky approach but most optimized one .


// class Solution {
// public:
//         int trap(vector<int>& height) {
//         int n = height.size();
//         int left = 0, right = n - 1;
//         int leftMax = 0, rightMax = 0;
//         int ans = 0;

//         while (left < right) {
//             if (height[left] <= height[right]) {
//                 if (height[left] >= leftMax)
//                     leftMax = height[left];
//                 else
//                     ans += leftMax - height[left];
//                 left++;
//             } else {
//                 if (height[right] >= rightMax)
//                     rightMax = height[right];
//                 else
//                     ans += rightMax - height[right];
//                 right--;
//             }
//         } 
//         return ans;
//     }
// };
