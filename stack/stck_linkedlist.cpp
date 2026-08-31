class LinkedListStack {
public:
    struct node {
        int data ;
        node* next;
        node(int x ){
            data = x;
            next=nullptr;
        }
    };
    node* head;
    LinkedListStack() {
        head= nullptr;
    }
    
    void push(int x) {
        node* tmp = new node(x);
        tmp->next=head;
        head=tmp;
    }
    
    int pop() {
        int ans = head->data;
        node* tmp = head;
        head = head->next;

        delete tmp;

        return ans;
    }
    
    int top() {
      return head->data;
    }
    
    bool isEmpty() {
  return head == nullptr;
    }
};