//                              # a non thinkable type problem first time for me logic was tough ;


// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//     int first = INT_MAX;
//     int second = INT_MAX;
//     for (int x : nums) {
//         if (x <= first)
//             first = x;
//         else if (x <= second)
//             second = x;
//         else
//             return true;
//     }
//     return false;    
//     }
// };


//  source: https://youtu.be/xZqnJe3vukA  
// explaination as 3 number bola hai to we could think of 3 numbers , 1st 2nd 3rd so that condition is met , and jab bhi unse chota values paye tab use update kr diye aas jitna chota utta beter , and jab nums ka elemenst >first and > second hua tab return true as all condtions are met corectly;

// dry run 
// {2,1,5,0,4,6}
//  