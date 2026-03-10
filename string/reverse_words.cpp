// class Solution {
// public:
//     string reverseWords(string s) {
//         int n = s.length();
//         string ans= "";
//         reverse(s.begin(),s.end());

//         for(int i = 0 ; i < n; i++){
//             string word= "";

//             while(i<n && (s[i] != ' ')){      yhn single quote is imp as space is a charchater 
//                 word+=s[i];
//                 i++;
//             }

//             reverse(word.begin(),word.end());
//             if (word.length()>0){
//                  ans+=" "+word;
//             }

// jab first word add ho gya tab i uske baad ke space wale index pe hoag then for loop ke main yahn pe i++ hoga to next iteration p ejake again se new word start krega :
           
//         }
//         return ans.substr(1);               to remove the first space additional one 
//     }
// };


// example word :   akash is a good boy  (iske reverse amin index apply krna hai but just for example )
//                  01234567891011121314151617    to spaces ek index pe hai like ,->> 5,8,10,15 in pe 
// to first baar main boy banega and i =3 hogi after whiel and again due to for loop 3++= 4 to  4 se again start hoga new word taht would be doog -> reverse->doog 