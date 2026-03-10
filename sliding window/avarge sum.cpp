// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         long long cursum= 0 ; 
//         int n = nums.size();
//         for (int i = 0;i<k;i++){
//             cursum+=nums[i];
//         }
//         long long avg= cursum ;
//         for(int i = k;i<n;i++){
//             cursum+=nums[i];     //window ke next element ko add 
//             cursum-=nums[i-k];   //window ke first element ko remove as window moved forward;
//             avg= max(avg,cursum);
//         }
//         return (double)avg/k;
//     }
// };