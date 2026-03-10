// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& a) {
//         stack<int> st;

//         for (int i = 0; i < a.size(); i++) {
//             int x = a[i];

//             while (!st.empty() && st.top() > 0 && x < 0) {
//                 if (abs(st.top()) < abs(x)) {
//                     st.pop();
//                 }
//                 else if (abs(st.top()) == abs(x)) {
//                     st.pop();
//                     x = 0;
//                     break;
//                 }
//                 else {
//                     x = 0;
//                     break;
//                 }
//             }

//             if (x != 0)
//                 st.push(x);
//         }

//         vector<int> ans(st.size());
//         for (int i = ans.size() - 1; i >= 0; i--) {
//             ans[i] = st.top();
//             st.pop();
//         }

//         return ans;
//     }
// };