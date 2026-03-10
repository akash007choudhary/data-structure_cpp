// something using string as a stack 

// class Solution {
// public:
//     string removeStars(string s) {
//         string res = "";

//         for (char c : s) {
//             if (c == '*') {
//                 res.pop_back();
//             } else {
//                 res.push_back(c);
//             }
//         }

//         return res;
//     }
// };


// normal stack approch 

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '*') {
                st.pop();   // remove previous character
            } else {
                st.push(c);
            }
        }

        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};









// using string as aa stack
// string st;

// // push
// st.push_back('a');
// st.push_back('b');

// // top
// char top = st.back();  // 'b'

// // pop
// st.pop_back();

// // check empty
// if (st.empty()) {
//     // stack is empty
// }




