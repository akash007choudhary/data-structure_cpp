// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
        
//         if (head == NULL ||head->next == NULL) {
//             return head;
//         }

       
//         ListNode* odd = head;
//         ListNode* even = head->next;
//         ListNode* evenhead = even;

//         while (even != NULL && even->next != NULL) { 

// yahan whiel amin even liye as end main even hoga ya nhi hoga aur agar hua to uska next null hoga so as start is odd , but if even se start hota position to odd ko dekhet 
//             odd->next= even->next;
//             odd= odd->next;

//             even->next= odd->next;
//             even= even ->next;

//         }
//         odd->next= evenhead; 
//         return head ;
//     }
// };