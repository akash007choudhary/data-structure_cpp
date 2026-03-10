#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node* prev;
  node( int val){
    data = val;
    next = prev = NULL;
  }
};

class doublylist {
  node* head;
  node* tail ; 
  public:
  doublylist (){
    head= tail = NULL; 
 }
 void push_front(int val){
  node* newnode= new node(val);   
  // created a new node box ; 
  if ( head==NULL){
    head= tail = newnode;
  }else{
    newnode -> next = head;
    head -> prev= newnode; 
    head= newnode ;
  }
 }
 void print (){
  node* temp = head; 
   while ( temp!= NULL ){
    cout << temp -> data <<"->";
     temp = temp-> next;
   }
   cout<<"NULL";
  }


  void push_back (int val ){
    node* newnode = new node(val);
    if ( head==NULL){
      head = tail = newnode; 
    }else{
      newnode -> prev = tail ; 
      tail -> next = newnode ; 
      tail = newnode; 
    }
  }
  void pop_front(){
    if (head==NULL){
      cout<<"empty doubly list ";
      return ; 
    }
    node* temp = head; 
    head = head-> next ;
    if (head!= NULL){

    head-> prev = NULL;   // ye abs if main chek hoga 
    }
    temp-> next= NULL;     //** ye alwsy krna ai hi!  beacuse we have cretaed a space by using new so use khali krne ke liye delete keyword is imp 
    delete temp; 
  }
  void pop_back(){
    if( head == NULL){
      cout<<"niul hai to cant print "<<endl;
      return;
    }else{
      node* temp = tail ; 
      tail = tail -> prev; 
      if ( tail != NULL){         // edge case imp !
        tail-> next = NULL;      }
    temp -> prev = NULL;
    delete temp ;
      }
  }
};


int main (){
  doublylist dll ;
  dll. push_front(1);
  
  dll. push_front(5);
  
  dll. push_front(3);
  
  dll. push_front(2);
  dll. push_back(0);
    dll. push_back(7);
      dll. push_back(3);
        dll. push_back(6);
 dll. pop_front ( );
 dll.pop_back();
 
  dll.print();
  return 0; 
}
    
                                          // reverse a doubly linked list 
/*
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
*/
 
// class Solution {
// public:
//     ListNode* reverseDLL(ListNode* head) {
//         if (!head) return nullptr;

//         ListNode* temp = head;

//         // traverse entire list swapping prev and next
//         while (temp->next != nullptr) {
//             swap(temp->prev, temp->next);
//             temp = temp->prev; // move forward (was next before swap)
//         }

//         // final swap for last node
//         swap(temp->prev, temp->next);

//         // temp is now the new head
//         return temp;
//     }
// };
