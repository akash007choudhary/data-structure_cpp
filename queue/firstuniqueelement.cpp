// class Solution {
// public:
//     int firstUniqChar(string s) {
//         unordered_map<char, int> m;
//         queue<int> q;

//         for (int i =0 ; i<s.size();i++){
//             if(m.find(s[i])==m.end()){          means frequency is 1 ; *orits unique ;
//                 q.push(i);
//             }

//             m[s[i]]++;                     iif not then we are increasing its frequncy ;
//             while(q.size()>0 && m[s[q.front()]]>1){         *now we always check the fornt as its unique or not if frequency is greater than 1 then pop ();
//                 q.pop();
//             }
//         }
//             return q.empty()?-1: q.front();
//     }
// };