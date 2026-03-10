// the maximum of all subarrays of size k;






//               noob apporach 0(n*k) TC used 
#include <iostream>
#include<vector>

#include<deque>
using namespace std;

int main() {
    int nums[] ={1,3,-1,-3,5,3,6,7};
    int k = 3;

    vector<int>ans;
    for (int i = 0 ; i <8-k;i++){      // to counter the going of j out of bound , which woudl give random values ;
        int max = nums[i] ;
        for (int j = i ; j <(i+k);j++){
           
            if (nums[j]>max){
                max = nums[j];
            }
        }
        ans.push_back(max);
    }


    for (int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}





//            optimised approach                 **** look for the logic ****


// The front of deque always stores the index of the maximum element of the current window.
// We remove smaller elements from the back, since they can’t be the maximum anymore.
// we are storing the index in the deque of the viable answer 
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int> res;


        // for the first window ; 
        for (int i = 0; i<k;i++){
            while(dq.size()>0&& nums[dq.back()]<= nums[i]){
                dq.pop_back(); // because the smaller one will never be the maximum again.
            }
            dq.push_back(i);

            //  so baisically the front will alwssy have the max elemnet for the current window; 
        }
        for (int i = k ; i <nums.size();i ++){
            res.push_back(nums[dq.front()]);   // thus as front  is the max for the window so phle use result amin daal deneg , jo ki actuall answer hai;

            // AB JAB next window main gye to we will always chekc ki jo elemnets qeque main hia wo current window ke hi ho uske liye uska index i-k+1 se i tak ke bich main ho ye needed hai nhi ti use pop kr deneg from fornt as front main max ele horhe store ; 
            while(dq.size()>0 && dq.front()<=i-k){
                dq.pop_front();
            }
            // same uper wlaa logic , phle ka 
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);

        
        }
        res.push_back(nums[dq.front()]);
        return res ;
    }
};
  

//                                ----------- algorithm basic ------------


// Process the First Window (first k elements)

// For each index i from 0 to k-1:
// a. While the deque is not empty and the current element nums[i] is greater than or equal to the element at index dq.back() →
// ➤ Remove that index from the back (dq.pop_back()),
// because smaller elements can never be maximum in this or future windows.
// b. Push the current index i into the deque (dq.push_back(i)).

// 🔸 After this loop,
// the front of the deque (dq.front()) stores the index of the maximum element in the first window.

// Slide the Window Across the Array (for i = k to n-1)

// Append the current window’s maximum to result:
// ➤ res.push_back(nums[dq.front()])
// (Because the front of deque always holds the index of the current window’s maximum.)

// Remove indices that are no longer inside the current window:
// ➤ While dq.front() <= i - k, pop from the front (dq.pop_front()).

// Remove all indices whose corresponding elements are smaller than or equal to the current element nums[i]:
// ➤ While nums[dq.back()] <= nums[i], pop from the back (dq.pop_back()).

// Push the current index i into deque (dq.push_back(i)).

// After the Loop Ends

// The deque still holds indices for the last window →
// ➤ Push its maximum (nums[dq.front()]) into res.

// Return the Result

// Output the vector res containing all maximums.