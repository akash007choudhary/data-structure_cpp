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
// int pairSum(ListNode* head) {
//     // 1. Find middle
// //  slow is at the middle 
//     ListNode* slow = head;
//     ListNode* fast = head;

//     while (fast && fast->next) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }



// this is the part i get alwasy confused so look at this a lways to know the pointer arrangements
//     // 2. Reverse second half
//     ListNode* prev = nullptr;
//     while (slow) {
//         ListNode* nextNode = slow->next;
//         slow->next = prev;
//         prev = slow;
//         slow = nextNode;
//     }

//     // 3. Compute twin sum
//     int maxsum = 0;
//     ListNode* st = head;
//     ListNode* end = prev;

//     while (end) {
//         maxsum = max(maxsum, st->val + end->val);
//         st = st->next;
//         end = end->next;
//     }

//     return maxsum;


//     }
// };