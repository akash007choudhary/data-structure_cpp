// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         // sort(nums.begin(), nums.end());

//         int freq = 0;
//         int ans = 0;


//         for (int i = 0; i < n; i++) {
//             if (freq== 0 ) {
//                 ans = nums[i];
              
//             }
//              if(ans==nums[i]){
//                 freq++;
                
//             }
//              else  {
//                 freq--;
//             } 
                
            
//         }
//      return ans ; 
  
//     }
// };


// ismain koi compare nhi krte just we take tha last ans value wahi hamara final value hoga jo maxximum occur hua hoga then others ;

// ye tabhi ans ko update krta hai jab ans == nums[i] ke baraabar ho warna just freq ko change krta plus or minus so last jo ans main rhta wahi hamara majaority elmenet ho jaata 