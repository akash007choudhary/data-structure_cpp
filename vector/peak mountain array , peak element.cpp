//  class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n = nums.size();
//         int start = 0; 
//         int end = n-1;
//         while(start < end ){
//             int mid = start +( (end-start)/2);
//             if ( nums[mid]>nums[mid+1]){
//               end = mid;
//             }
           
//             else{
//                 start = mid+1;
//             }
//         }
//         return start ;
        
//     }
// };


















// finding if peak mountain array or not 
// 941 --->>> leetcode
// class Solution {
// public:
//     bool validMountainArray(vector<int>& arr) {
//         int  n = arr.size();
//         if (n<3){
//             return false;
//         }
        
//         int peak = max_element(arr.begin(),arr.end())-arr.begin();
        
//         if(peak==0 || peak ==n-1){
//             // edge case handeled correctly ;
//             return false; 

//         }
//         for (int i = 1; i <= peak; i ++ ){
//             if (arr[i-1]<arr[i]){
//                 continue;
//             }
//             else {
                
//                 return false;
//             }
//         }
//         for (int i = peak; i<n-1; i++){
//             if(arr[i+1]<arr[i]){
//                 continue;
//             }
//             else{
//                 return false; 
//             }
//         }
//        return true ;
//     }
// };