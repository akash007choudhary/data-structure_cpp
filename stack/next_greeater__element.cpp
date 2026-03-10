#include <iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {
    vector<int> arr={6,8,0,1,3}  ;
    // next greater element
    stack<int>s;
    vector<int> ans(arr.size(),0);           // we will store the answer here
    for(int i = arr.size()-1;i>=0;i--){
        while (s.size()>0 && s.top()<=arr[i]){          // pop until we find a greater element at the top of the stack.
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]= s.top();
        }
        s.push(arr[i]);
        
    }

    // to print 
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}


  
                                        // previos  smaller element
  
                       


    // vector<int> arr={6,8,0,1,3}  ;
    // stack<int>s;
    // vector<int> ans(arr.size(),0);           // we will store the answer here
    // for(int i = 0;i<arr.size();i++){
    //     while (s.size()>0 && s.top()>=arr[i]){          // pop until we find a greater element at the top of the stack.
    //         s.pop();
    //     }
    //     if(s.empty()){
    //         ans[i]=-1;
    //     }
    //     else{
    //         ans[i]= s.top();
    //     }
    //     s.push(arr[i]);
        
    // }

    // // to print 
    // for(int val: ans){
    //     cout<<val<<" ";
    // }
    // cout<<endl;


                    //   next greater element circular array
//                     class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans (n, 0);
//         stack<int> s ;
//         for (int i = 2*n-1 ; i >=0; i--){
//             while (s.size()>0 && nums[s.top()]<= nums[i%n]){
//                 s.pop();
//             }
//             ans[i%n]=s.empty()?-1:nums[s.top()];
//             s.push(i%n);
//         }
//         return ans ; 
//     }
// };



// i%n is the formula to keep the index in the range of 0 to n-1 even when we are iterating from 2n-1 to 0. This allows us to simulate a circular array by wrapping around the indices. 
// The expression i%n gives the remainder when i is divided by n. For values of i from 0 to n-1, i%n simply returns i itself. However, for values of i from n to 2n-1, i%n wraps around and returns values from 0 to n-1 again. This way, we can access the elements of the array in a circular manner.