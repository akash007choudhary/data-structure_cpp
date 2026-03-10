// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int st = 0, end = 0, count = 0, maxsize = 0;

//         while (end < nums.size()) {
//             // always expand
//             if (nums[end] == 0) {
//                 count++;
//             }
//             end++;

//             // shrink only when invalid
//             while (count > k) {
//                 if (nums[st] == 0) {
//                     count--;
//                 }
//                 st++;
//             }

//             // update answer only when window is valid
//             maxsize = max(maxsize, end - st);
//         }

//         return maxsize;
//     }
// };


// it was tough thinking but i did most of it and at last did the code , and brainstorming










// and leetcode 1493 qns bhi similar hai  same code  

// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int st=0,end=0, count=0,maxlen=0;
//          while(end<nums.size()){
//             if(nums[end]==0){
//                 count++;
//             }
//             while(count>1){
//                 if(nums[st]==0){
//                     count--;
//                 }
//                 st++;
//             }
           

//             maxlen= max(maxlen, end-st);
//              end++;
//          }
//          return maxlen;
//     }

// };



