// TIME COMPLEXITY IS O(2^N as in each iteration the size of strinng becomes nearly double thus its more sign ificnat than O(N)

// class Solution {
// public:
//         string reverse_str(string str) {
//             reverse(str.begin(),str.end());
//             return str;
//          }
//         string invert( string str) {
//             for(int i = 0 ; i< str.size();i++){
//                 if(str[i]=='0') str[i]='1';
//                 else str[i]='0';
//             }
//             return str;
//         }
//     char findKthBit(int n, int k) {

//         vector<string> str;
//         str.push_back("0");
//         for(int i=1; i<n;i++){
//             string prv= str[i - 1];
//             string str_new = prv + "1" + reverse_str(invert(prv));
//             str.push_back();
           
        
//         }

//         return str[n-1][k-1];
//     } 
// };