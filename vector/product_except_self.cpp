//                      " most optimised time and space complexity "

// note 
// int index = max_element(v.begin(), v.end()) - v.begin(); // for gettting the  index of max element


// max_element hamesha pointer return krta so for value of max element we do *max_element , mat;b derefrencing  kret to get teh value 




//  class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//       int n = nums.size();
//       vector <int> ans(n,1); 

//        for (int i = 1 ; i < n ; i++){
//         ans[i]= ans[i-1]* nums[i-1];    
//      }
//       int suffix= 1 ;
//       for (int i = n-2; i >= 0 ; i--){
//         suffix *=nums[i+1];
//         ans[i]*=suffix;
//      }

     
//      return ans ; 
//     }
// };

