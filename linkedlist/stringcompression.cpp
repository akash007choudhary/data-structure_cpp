
                                        // "leetcode 443 string compression "


// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int n = chars.size();
//         int indx = 0;
//         for (int i = 0; i < n; i++) {
//             char ch = chars[i];
//             int count = 0;
//             while (i < n && chars[i] == ch) {
//                 count++;
//                 i++;
//             }
//             if (count == 1) {
//                 chars[indx++] = ch;
//             } else {
//                 chars[indx++] =ch;
                // string str = to_string(count); 
                
                // *** " // to_string(count) ----->>> ye fxn is imp for interviews as ye kisi bhi intezer ko string main convert kr deta hahi !!!!"***


//                 for (char dig : str) {
//                     chars[indx++] = dig;
//                 }
//             }
//             i--;
//         }
//         chars.resize(indx);
//         return indx;
//     }
// };