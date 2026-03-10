// // OPTIMISED SILUTION 


// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int mx = piles[0];
//         for (int i = 1; i < piles.size(); i++) {
//             if (piles[i] > mx) {
//                 mx = piles[i];
//             }
//         }
//         int low = 1, high = mx;
//         int ans = mx;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             long long  thrs = 0;
//             for (int i = 0; i < piles.size(); i++) {
//                 thrs += ceil(double(piles[i]) / mid);
//             }

//             if (thrs <= h) {
//                 ans = mid;      // mid works
//                 high = mid - 1; // try smaller speed
//             } else {
//                 low = mid + 1; // need faster speed
//             }
//         }

//         return ans;
//     }
//     };


//     // BRUTFORCE APPROACH 

//     class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {

//         int mx = piles[0];
//         for (int i = 1; i < piles.size(); i++) {
//             if (piles[i] > mx) {
//                 mx = piles[i];
//             }
//         }

//         // brute force: try every speed
//         for (int k = 1; k <= mx; k++) {
//             long long thrs = 0;

//             for (int i = 0; i < piles.size(); i++) {
//                 thrs += ceil(double(piles[i]) / k);
//             }

//             if (thrs <= h) {
//                 return k;   // first valid speed
//             }
//         }

//         return mx;
//     }
// };
