#include <iostream>
// #include <vector>
#include<queue>  // for STL queue
using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
// private:
//     node *head;
//     node *tail;

// public:
//     queue()
//     {
//         head = tail = NULL;
//     }

//     void push(int val)
//     { // insert at tail
//         node *newnode = new node(val);
//         if (empty())
//         {
//             head = tail = newnode;
//         }
//         else
//         {
//             tail->next = newnode;
//             tail = newnode;
//         }
//     }

//     void pop()
//     { // from head
//         if (empty())
//         {
//             cout << "queue is empty" << endl;
//             return;
//         }
//         else
//         {
//             node *temp = head;
//             head = head->next;
//             delete temp;
//         }
//     }

//     int front()
//     {
//         if (empty())
//         {
//             cout << "queue is empty" << endl;
//             return -1;
//         }

//         return head->data;
//     }
//     bool empty()
//     {
//         return head == NULL;
//     }
// };


int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
   while(!q.empty()){
       cout<<q.front()<<" " ;
       q.pop();
   }
   cout<<endl;
   return 0;
}

// for deque use #include<deque> and replace queue<int>q; with deque<int>q;
// and we can use push_front(), push_back(), pop_front(), pop_back(), front(), back() functions.









