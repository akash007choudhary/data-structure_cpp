#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)               //constructor 
    {
        data = value;
        next = NULL;
    }
};
class list                        
{
public:
    node *head;
    node *tail;
    list()                 //constructor 
    {
        head = tail = NULL;
    }
    void push_front(int value)
    {
        node *newnode = new node(value); // ye line imp hai as ye new node crate karta hai smjha !';
        if (head == NULL)

        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int value)
    {
        node *newnode = new node(value);
        if (tail == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "null linked list" << endl;
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
 void pop_back()
{
    if (head == NULL)
    {
        cout << "a null linked list" << endl;
        return;
    }
    if (head == tail) // Only one node
    {
        delete head;
        head = tail = NULL;
        return;
    }
    node *temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}
    void insert(int value, int pos)
    {
        if (pos < 0)
        {
            cout << "invalid" << endl;
            return;
        }
        if (pos == 0)
        {
            push_front(value);
            return;
        }
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)


        {
            temp = temp->next;
        }
        node *newnode = new node(value); // new node creted with value
        newnode->next = temp->next;
        temp->next = newnode;
    }
    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    int search (int key ){
        node * temp = head;
        int index = 0;
        while (temp!=NULL){
            if (temp->data==key ){
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }

    // code ka cunk is fixed so ise kinda yaad krna hai 
    void reverse() {
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;
    // old head will become new tail tail = head; 
      
    while (curr != NULL) {
        next = curr->next;   
        curr->next = prev;   
        prev = curr;         
        curr = next;         
    }
    
    head = prev; // update head to new first node
}

};
int main()
{
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.print();
     cout<<ll.search(1)<<endl;
     ll.reverse();
         ll.print();
    return 0;
}


// detect and rmeove a cycle in the linked list :
/*
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool iscycle = false;   // initialize properly

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;  // move fast 2 steps
            if (slow == fast) {
                iscycle = true;
                break;
            }
        }

        if (!iscycle) {
            return NULL;
        }

        slow = head;
        ListNode* prev = NULL;
        while (slow != fast) {
            slow = slow->next;
            PREV = FAST ;    "YE FAST KA PURANA VALUE KO STORE KRKE RKHEGA TAKI"
            fast = fast->next;
            PREV-> NEXT = NULL;    ''YE CYCLE BREAK KR DIYA AS PREV FAST KO POINT KARA THA AND AB PREV KA NEXT JO HAI WO NULL KO POINT KR RHA THAT MEAN WO CYCLE KA LINK KAAT DIA!''
        }
        return slow;   // start of cycle in the list: 
    }
};
*/