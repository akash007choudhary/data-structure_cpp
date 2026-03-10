// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int  total;
//         for(int val:nums){
//             total +=val;
//         }
//         int left=0;
//         for(int i = 0 ; i<nums.size();i++){
//             int right= total-left-nums[i];
//             if(left==right){
//                 return i;
//             }
//             left+=nums[i];
//         }
//         return -1;
//     }
// };

//                                                INTUTION:
// ise sochne ke liye , think as key step is 
// leftsum== rightsum then its pivot;
// so if i have left sun then i wont have to calc right sum as i have total sum ;
// rightsum = total -leftsum-nums[i];
// but for i =0 ;
// left sum == 0; so initilaly left sum =0 ; calc rightsum then chekck for equality then find left summ ;