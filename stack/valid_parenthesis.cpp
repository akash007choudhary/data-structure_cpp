                           /* -----   leetcode 20 -------*/



// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char>st;

//         for (int i= 0 ; i<s.size();i++){
//             if (s[i]=='(' || s[i]=='[' || s[i]=='{' ){
//                 st.push(s[i]);
//             }else{
//                 if(st.size()==0){
//                     return false ;
//                 }
//                 if ((st.top()=='(' && s[i]==')')||(st.top()=='[' && s[i]==']')|| (st.top()=='{' && s[i]=='}')){
//                     st.pop();
//                 }
//                 else{
//                     return false;
//                 }

//             }
//         }
//         return st.size()==0;     // this is because if stack ke ander koi charachter nhi bache the to retrun krega valid parenthesis but if koi charachetr bach gya hai that means uska pair nhi mila khin bhi so return false as not a valid parenthesis;
//     }
// };